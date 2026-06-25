// OoT3D decomp @ 002c3b94  name=FUN_002c3b94  size=204

undefined4 FUN_002c3b94(float param_1,int param_2,short param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  
  fVar5 = (float)VectorSignedToFloat((int)(short)(param_3 - *(short *)(param_2 + 0xbe)),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if (*(int *)(param_2 + 0x16f8) == 0) goto LAB_002c3c00;
  iVar1 = FUN_0033bd6c(param_2);
  if (iVar1 == 0) {
    uVar2 = *(uint *)(param_2 + 0x1710);
    bVar4 = (uVar2 & 0x1000000) != 0;
    if (bVar4) {
      uVar2 = (uint)*(ushort *)(DAT_002c3c60 + param_2);
    }
    if (bVar4 && uVar2 != 0) goto LAB_002c3bf4;
    uVar3 = 0;
  }
  else {
LAB_002c3bf4:
    uVar3 = 1;
  }
  FUN_003341e4(param_2,uVar3);
LAB_002c3c00:
  fVar5 = ABS(fVar5) * DAT_002c3c64;
  if (param_1 <= DAT_002c3c70 + fVar5 * fVar5 * DAT_002c3c6c) {
    if (param_1 <= DAT_002c3c78 + (DAT_002c3c68 - fVar5) * DAT_002c3c74) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  return 1;
}

