// *************************************************************************
//  This file is part of SourceBans: Reloaded.
//
//  Copyright (C) 2014-2015 Sarabveer Singh <sarabveer@sarabveer.me>
//  
//  SourceBans: Reloaded is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Affero General Public License as published by
//  the Free Software Foundation, per version 3 of the License.
//  
//  SourceBans: Reloaded is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//  
//  You should have received a copy of the GNU Affero General Public License
//  along with SourceBans: Reloaded. If not, see <http://www.gnu.org/licenses/>.
//
//  This file incorporates work covered by the following copyright(s): 
//
//   SourceBans 1.5 Beta Plugin
//   Copyright (C) 2007-2013 SourceBans Team - Part of GameConnect
//   Licensed under GNU GPL version 3, or later.
//   Page: <http://www.sourcebans.net/> - <https://github.com/GameConnect/sourcebansv1>  
//
// *************************************************************************

#if defined _sb_bans_included
  #endinput
#endif
#define _sb_bans_included

/**
 * Submits a ban to the SourceBans database
 *
 * @param client		The index of the client
 * @param target		The index of the target
 * @param reason		The reason for the submission
 * @noreturn
 */
native SB_SubmitBan(client, target, const String:reason[]);

public SharedPlugin:__pl_sb_bans = 
{
	name = "sb_bans",
	file = "sb_bans.smx",
	#if defined REQUIRE_PLUGIN
	required = 1
	#else
	required = 0
	#endif
};

#if !defined REQUIRE_PLUGIN
public __pl_sourcebans_SetNTVOptional()
{
	MarkNativeAsOptional("SB_SubmitBan");
}
#endif