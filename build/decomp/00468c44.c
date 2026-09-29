// OoT3D decomp @ 00468c44  name=FUN_00468c44  size=344

void FUN_00468c44(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  int *piVar5;
  int iVar6;
  bool bVar7;

  piVar1 = DAT_00468d9c;
  iVar6 = *DAT_00468d9c;
  if (iVar6 != 0) {
    FUN_00483868();
    puVar2 = DAT_00468da0;
    uVar4 = extraout_r1;
    if (*(char *)(iVar6 + 9) != '\0') {
      if (*(int *)(iVar6 + 0x494) != 0) {
        uVar3 = FUN_00307674();
        piVar5 = (int *)*puVar2;
        (**(code **)(*piVar5 + 0x10))(piVar5,uVar3);
        uVar4 = extraout_r1_00;
      }
      *(undefined4 *)(iVar6 + 0x494) = 0;
      bVar7 = *(int *)(iVar6 + 0x478) != 0;
      if (bVar7) {
        uVar4 = (uint)*(byte *)(iVar6 + 0x480);
      }
      if (bVar7 && uVar4 != 0) {
        FUN_0034fc68();
        uVar4 = extraout_r1_01;
      }
      *(undefined4 *)(iVar6 + 0x478) = 0;
      *(undefined4 *)(iVar6 + 0x47c) = 0;
      *(undefined1 *)(iVar6 + 0x480) = 0;
      if (*(int *)(iVar6 + 0x498) != 0) {
        uVar3 = FUN_00307674();
        piVar5 = (int *)*puVar2;
        (**(code **)(*piVar5 + 0x10))(piVar5,uVar3);
        uVar4 = extraout_r1_02;
      }
      *(undefined4 *)(iVar6 + 0x498) = 0;
      bVar7 = *(int *)(iVar6 + 0x488) != 0;
      if (bVar7) {
        uVar4 = (uint)*(byte *)(iVar6 + 0x490);
      }
      if (bVar7 && uVar4 != 0) {
        FUN_0034fc68();
      }
      *(undefined4 *)(iVar6 + 0x488) = 0;
      *(undefined4 *)(iVar6 + 0x48c) = 0;
      *(undefined1 *)(iVar6 + 0x490) = 0;
      FUN_004802cc(iVar6);
      *(undefined1 *)(iVar6 + 9) = 0;
      uVar4 = extraout_r1_03;
    }
    uVar3 = DAT_00468da4;
    iVar6 = *piVar1;
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0x484) = DAT_00468da4;
      bVar7 = *(int *)(iVar6 + 0x488) != 0;
      if (bVar7) {
        uVar4 = (uint)*(byte *)(iVar6 + 0x490);
      }
      if (bVar7 && uVar4 != 0) {
        FUN_0034fc68();
        uVar4 = extraout_r1_04;
      }
      *(undefined4 *)(iVar6 + 0x488) = 0;
      *(undefined4 *)(iVar6 + 0x48c) = 0;
      *(undefined1 *)(iVar6 + 0x490) = 0;
      *(undefined4 *)(iVar6 + 0x474) = uVar3;
      bVar7 = *(int *)(iVar6 + 0x478) != 0;
      if (bVar7) {
        uVar4 = (uint)*(byte *)(iVar6 + 0x480);
      }
      if (bVar7 && uVar4 != 0) {
        FUN_0034fc68();
      }
      *(undefined4 *)(iVar6 + 0x478) = 0;
      *(undefined4 *)(iVar6 + 0x47c) = 0;
      *(undefined1 *)(iVar6 + 0x480) = 0;
      FUN_003525d4(iVar6);
    }
    *piVar1 = 0;
  }
  return;
}
