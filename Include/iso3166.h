/*
 * Copyright 2017 Archos SA
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _ISO3166_H_
#define _ISO3166_H_

const char *map_ISO3166_code( const char *code );

const char *map_ISO3166_getCountryFromCode( const char *P_ptCode, int * P_ptIndex );
void map_ISO3166_getCountryFromIndex( INT32 P_Index, const char ** P_ptptCode, const char ** P_ptptName);
INT32 map_ISO3166_getCountryListSize( void );


#endif
