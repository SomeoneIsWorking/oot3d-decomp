// OoT3D decomp @ 00446fc4  name=FUN_00446fc4  size=120

void FUN_00446fc4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_234 [524];
  undefined4 auStack_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;

  iVar4 = 0;
  iVar2 = FUN_002e63c8(DAT_0044703c);
  iVar1 = DAT_00447044;
  if (iVar2 != 0) {
    iVar4 = 3;
  }
  iVar4 = iVar4 + param_1;
  auStack_28[0] = *DAT_00447040;
  auStack_28[1] = DAT_00447040[1];
  auStack_28[2] = DAT_00447040[2];
  auStack_28[3] = DAT_00447040[3];
  uStack_18 = DAT_00447040[4];
  uStack_14 = DAT_00447040[5];
  if (*(int *)(DAT_00447044 + iVar4 * 4) != 0) {
    FUN_00324f44(auStack_234,auStack_28[iVar4],DAT_00447048);
    uVar3 = FUN_002e6344(auStack_234,1);
    *(undefined4 *)(DAT_0044704c + 4) = uVar3;
    *(undefined4 *)(iVar1 + iVar4 * 4) = 0;
  }
  return;
}
