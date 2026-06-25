// OoT3D decomp @ 004bc98c  name=FUN_004bc98c  size=340

void FUN_004bc98c(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  undefined auStack_24 [4];
  float local_20;
  
  iVar2 = FUN_0036b4ec(param_1 + 0x254);
  fVar1 = DAT_004bcae8;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004bcae0 + 0x6a),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(DAT_004bcae8,fVar5 * DAT_004bcae4,param_1 + 0x221c);
  iVar3 = FUN_002c3d18(param_2,param_1,DAT_004bcaec,1);
  if ((iVar3 == 0) &&
     (FUN_0036b3f4(fVar1,param_1,&local_20,auStack_24,param_2),
     *(float *)(param_1 + 0x221c) == fVar1)) {
    *(undefined2 *)(DAT_004bcaf0 + param_1) = *(undefined2 *)(param_1 + 0xbe);
    iVar3 = FUN_002bcd38(param_1,&local_20,auStack_24,param_2);
    if (iVar3 < 1) {
      if (local_20 != fVar1 || iVar2 != 0) {
        FUN_0036055c(param_2,param_1,DAT_004bcaf4,1);
        uVar4 = 0xe1;
        if (((*(uint *)(param_1 + 0x29b8) & 0x200) != 0) ||
           (((*(char *)(DAT_004bcaf8 + param_1) == '\x01' && ('P' < *DAT_004bcafc)) &&
            ((*(uint *)(param_1 + 0x29b8) & 0x400) == 0)))) {
          uVar4 = DAT_004bcb00;
        }
        FUN_003604f0(param_1 + 0x254,param_2,uVar4);
        return;
      }
    }
    else {
      FUN_002c3c7c(param_1,param_2);
    }
  }
  return;
}

