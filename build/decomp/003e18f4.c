// OoT3D decomp @ 003e18f4  name=FUN_003e18f4  size=352

void FUN_003e18f4(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  if ((*(short *)(param_1 + 0x7e0) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x7e0) + -1, *(short *)(param_1 + 0x7e0) = sVar1, sVar1 != 0)) {
    return;
  }
  uVar4 = DAT_003e1a54;
  if (*(char *)(param_1 + 0xb7) == '\0') {
    if (((*DAT_003e1a58 & 1) == 0) &&
       (iVar3 = FUN_003679b4(DAT_003e1a58), puVar2 = DAT_003e1a5c, iVar3 != 0)) {
      *DAT_003e1a5c = uVar4;
      puVar2[1] = uVar4;
      puVar2[2] = uVar4;
    }
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    *(undefined4 *)(param_1 + 100) = uVar4;
    FUN_003642f4(param_2,param_1 + 0x28,DAT_003e1a5c,DAT_003e1a5c,0xfa,0xfffffff6,0xff,0xff,0xff,
                 0xff,0,0,0xff,1,0xb,1);
    FUN_00374444(param_2,param_1,param_1 + 0x28,0xc0);
    uVar4 = DAT_003e1a60;
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = DAT_003e1a54;
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,2);
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003e1a68,uVar4,uVar5,DAT_003e1a64,param_1 + 0x1a4,2);
    uVar4 = DAT_003e1a6c;
  }
  *(undefined4 *)(param_1 + 0x7dc) = uVar4;
  return;
}
