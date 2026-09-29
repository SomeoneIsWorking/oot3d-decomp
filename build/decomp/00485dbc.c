// OoT3D decomp @ 00485dbc  name=FUN_00485dbc  size=340

void FUN_00485dbc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;

  piVar5 = *(int **)(param_1 + 4);
  if (piVar5 != (int *)(param_1 + 4)) {
    do {
      piVar6 = (int *)*piVar5;
      FUN_00486234(piVar5 + -0x37);
      piVar5 = piVar6;
    } while (piVar6 != (int *)(param_1 + 4));
  }
  if (1 < *(uint *)(param_1 + 0xc)) {
    iVar1 = DAT_00485f18;
    if (((*DAT_00485f10 & 1) == 0) &&
       (iVar2 = FUN_003679b4(DAT_00485f10), iVar1 = DAT_00485f18, iVar2 != 0)) {
      FUN_00350820(DAT_00485f18,DAT_00485f14,0xc,0x80);
      iVar1 = DAT_00485f18;
    }
    while (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = *(int *)(param_1 + 0x10);
      FUN_0030c964(param_1 + 0xc);
      iVar3 = (uint)*(byte *)(iVar4 + -0x4c) + *(int *)(iVar4 + -0x94);
      iVar2 = UnsignedSaturate(iVar3,7);
      UnsignedDoesSaturate(iVar3,7);
      iVar2 = iVar1 + iVar2 * 0xc;
      FUN_0030cab0(iVar2,iVar2 + 4,iVar4);
    }
    iVar2 = 0;
    do {
      while (piVar5 = (int *)(iVar1 + iVar2 * 0xc), *piVar5 != 0) {
        iVar3 = piVar5[1];
        FUN_0030c964();
        FUN_0030cab0(param_1 + 0xc,param_1 + 0x10,iVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x80);
  }
  return;
}
