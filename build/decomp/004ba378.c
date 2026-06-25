// OoT3D decomp @ 004ba378  name=FUN_004ba378  size=420

void FUN_004ba378(int param_1,undefined4 param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  uint local_28;
  float local_24;
  
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x20;
  FUN_002be660(param_1);
  iVar4 = FUN_002c3d18(param_2,param_1,DAT_004ba51c,1);
  if (iVar4 == 0) {
    iVar4 = FUN_00349574(param_1);
    if ((iVar4 != 0) || ((*(uint *)(param_1 + 0x1710) & DAT_004ba520) != 0)) {
      FUN_002c3c7c(param_1,param_2);
      return;
    }
    FUN_0036b3f4(DAT_004ba524,param_1,&local_24,&local_28,param_2);
    fVar3 = DAT_004ba530;
    fVar2 = DAT_004ba52c;
    piVar1 = DAT_004ba528;
    iVar4 = (int)(short)(*(short *)(param_1 + 0x2220) - (short)local_28);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (0x6000 < iVar4) {
      fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004ba528 + 0x6a),
                                         (byte)(in_fpscr >> 0x15) & 3);
      iVar4 = FUN_003705a0(DAT_004ba530,fVar5 * DAT_004ba52c,param_1 + 0x221c);
      if (iVar4 == 0) {
        return;
      }
      local_24 = fVar3;
      local_28 = (uint)*(ushort *)(param_1 + 0x2220);
    }
    iVar4 = (int)(short)local_28;
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x3a),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_002dd714(local_24,fVar5 * fVar2,DAT_004ba534,param_1 + 0x221c);
    FUN_00370378(param_1 + 0x2220,iVar4,(int)*(short *)(*piVar1 + 0x4a));
    FUN_002bcbac(param_1,param_2);
    if (((*(uint *)(param_1 + 0x29b8) & 4) != 0) ||
       (*(float *)(param_1 + 0x221c) == fVar3 && local_24 == fVar3)) {
      FUN_002c2658(param_1,param_2);
      FUN_002be4c4(param_1,param_2);
    }
  }
  return;
}

