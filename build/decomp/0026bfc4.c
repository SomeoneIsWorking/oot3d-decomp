// OoT3D decomp @ 0026bfc4  name=FUN_0026bfc4  size=500

void FUN_0026bfc4(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  short *unaff_r5;
  bool bVar5;
  uint in_fpscr;
  undefined4 uVar6;

  FUN_0032cc6c();
  FUN_0032cacc(param_2);
  iVar2 = FUN_0037571c(param_2);
  if (iVar2 != 0) {
    unaff_r5 = *(short **)(param_2 + 0x22ec);
  }
  if ((iVar2 != 0 && unaff_r5 != (short *)0x0) && (*unaff_r5 == 2)) {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,2);
    *(undefined4 *)(param_1 + 3000) = 2;
    *(undefined4 *)(param_1 + 0xbbc) = 1;
    uVar6 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    uVar3 = VectorSignedToFloat(*(undefined4 *)(unaff_r5 + 6),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    uVar3 = VectorSignedToFloat(*(undefined4 *)(unaff_r5 + 8),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    uVar3 = VectorSignedToFloat(*(undefined4 *)(unaff_r5 + 10),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    if (*(int *)(param_2 + 0x22d8) == 0) {
      sVar1 = *(short *)(*(int *)(DAT_0026c1b8 + param_2) + 0x36);
    }
    else {
      sVar1 = *(short *)(*(int *)(param_2 + 0x22d8) + 8);
    }
    *(short *)(param_1 + 0x36) = sVar1 + -0x8000;
    *(short *)(param_1 + 0xbe) = sVar1 + -0x8000;
    uVar3 = DAT_0026c1c0;
    *(undefined4 *)(*(int *)(param_1 + 0x21c) + (uint)*(byte *)(param_1 + 0x219) * 0x34 + 0x1c) =
         DAT_0026c1bc;
    uVar4 = (uint)*(byte *)(param_1 + 0x219);
    *(undefined4 *)(param_1 + 0x208) =
         *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar4 * 0x34 + 0xc);
    *(undefined4 *)(param_1 + 0x20c) =
         *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar4 * 0x34 + 0x1c);
    *(undefined4 *)(param_1 + 0x210) =
         *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar4 * 0x34 + 0x2c);
    *(undefined4 *)(param_1 + 0x1fc) =
         *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar4 * 0x34 + 0xc);
    *(undefined4 *)(param_1 + 0x200) =
         *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar4 * 0x34 + 0x1c);
    *(undefined4 *)(param_1 + 0x204) =
         *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar4 * 0x34 + 0x2c);
    *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
    FUN_003fd1b8(uVar3,param_2,param_1,param_1 + 0x1a4);
    FUN_00375c08(uVar3,DAT_0026c1c4,uVar6,DAT_0026c1c4,param_1 + 0x1a4,2);
    iVar2 = *(int *)(DAT_0026c1c8 + 0x4e8);
    bVar5 = iVar2 == 4;
    if (bVar5) {
      iVar2 = (int)*(short *)(param_2 + 0x104);
    }
    if (!bVar5 || iVar2 != 0x5c) {
      FUN_0037547c(DAT_0026c1d4,0,4,DAT_0026c1d0,DAT_0026c1d0,DAT_0026c1cc);
    }
  }
  return;
}
