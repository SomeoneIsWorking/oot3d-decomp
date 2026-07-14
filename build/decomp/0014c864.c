// OoT3D decomp @ 0014c864  name=FUN_0014c864  size=556

void FUN_0014c864(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint in_fpscr;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float local_18;
  
  FUN_00357fd0(*(undefined4 *)(DAT_0014ca90 + param_2),*(undefined4 *)(param_1 + 0x178),
               param_1 + 0x28);
  uVar2 = (uint)*(short *)(param_1 + 0x1c);
  bVar4 = uVar2 != 0xfffffffe;
  if (bVar4) {
    uVar2 = (uint)*(ushort *)(param_1 + 0xa66);
  }
  if (bVar4 && uVar2 != 0) {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),7);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),5);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),4);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),6);
  }
  else {
    FUN_0037266c();
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),7);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),5);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),4);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),6);
  }
  if (*(short *)(param_1 + 0xa70) != 0xff) {
    local_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    local_18 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xa70),
                                          (byte)(in_fpscr >> 0x15) & 3);
    local_18 = local_18 * DAT_0014caa4;
    uVar3 = FUN_003687a8(*(undefined4 *)(param_1 + 0x1cc));
    FUN_003589cc(uVar3,5);
    FUN_00358964(uVar3,5,&local_24);
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_0014ca9c,DAT_0014ca98,param_1,0);
    return;
  }
  uVar3 = FUN_003687a8(*(undefined4 *)(param_1 + 0x1cc));
  FUN_00357a28(uVar3,5,&local_24);
  local_18 = (float)DAT_0014ca94;
  FUN_00358964(uVar3,5,&local_24);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_0014ca9c,DAT_0014ca98,param_1,0);
  if (*(short *)(param_1 + 0xa62) != 0) {
    sVar1 = *(short *)(param_1 + 0xa62) + -1;
    *(short *)(param_1 + 0x11a) = *(short *)(param_1 + 0x11a) + 1;
    *(short *)(param_1 + 0xa62) = sVar1;
    if (((int)sVar1 & 3U) == 0) {
      FUN_0035e710(DAT_0014caa0,param_2,param_1,param_1 + ((int)sVar1 >> 2) * 0xc + 0xb74,0x96,0x96,
                   0x96,0xfa,0xeb,0xf5,0xff);
    }
  }
  return;
}

