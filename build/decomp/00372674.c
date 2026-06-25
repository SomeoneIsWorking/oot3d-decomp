// OoT3D decomp @ 00372674  name=FUN_00372674  size=316

float FUN_00372674(float param_1)

{
  uint in_r3;
  float fVar1;
  uint local_8 [2];
  
  if ((uint)((int)param_1 * 2) < DAT_003727b0) {
    if ((uint)((int)param_1 * 2) < 0x73000000) {
      local_8[0] = 0xffffffff;
    }
    else {
      local_8[0] = 0;
    }
  }
  else if (((uint)param_1 & 0x7fffffff) < DAT_003727b4) {
    if (((uint)param_1 & 0x80000000) == 0) {
      fVar1 = (param_1 * DAT_003727b8 + DAT_003727bc) - DAT_003727bc;
    }
    else {
      fVar1 = (param_1 * DAT_003727b8 - DAT_003727bc) + DAT_003727bc;
    }
    local_8[0] = (int)fVar1 & 3;
    param_1 = (((param_1 - fVar1 * DAT_003727c0) - fVar1 * DAT_003727c4) - fVar1 * DAT_003727c8) -
              fVar1 * DAT_003727cc;
  }
  else {
    local_8[0] = in_r3;
    param_1 = (float)FUN_002c0b68(local_8);
  }
  if (-1 < (int)local_8[0]) {
    if ((local_8[0] & 1) == 0) {
      param_1 = param_1 * param_1;
      param_1 = DAT_003727d0 +
                param_1 * (DAT_003727ec + param_1 * (DAT_003727e8 + param_1 * DAT_003727e4));
      if ((local_8[0] & 2) == 0) {
        return param_1;
      }
    }
    else {
      fVar1 = param_1 * param_1;
      param_1 = param_1 + param_1 * (DAT_003727e0 + fVar1 * (DAT_003727dc - fVar1 * DAT_003727d8)) *
                                    fVar1;
      if ((local_8[0] & 2) != 0) {
        return param_1;
      }
    }
    return -param_1;
  }
  if ((uint)((int)param_1 * 2) < 0xff000000) {
    return DAT_003727d0;
  }
  if ((int)param_1 * 2 != 0xff000000) {
    return param_1 + param_1;
  }
  FUN_002eb01c(DAT_003727d0,1);
  return DAT_003727d4 / DAT_003727d4;
}

