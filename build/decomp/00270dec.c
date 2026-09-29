// OoT3D decomp @ 00270dec  name=FUN_00270dec  size=480

void FUN_00270dec(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;

  iVar9 = DAT_00270ff8;
  puVar3 = DAT_00270ff4;
  puVar2 = DAT_00270ff0;
  bVar1 = false;
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 0:
  case 3:
    if ((*(byte *)(param_2 + 0x7f5c) & 5) != 0) {
      iVar6 = 0;
      do {
        iVar7 = param_1 + iVar6 * 4;
        if (*(int *)(iVar7 + 0x16b8) != 0) {
          uVar4 = FUN_003488e4();
          piVar8 = (int *)*puVar2;
          (**(code **)(*piVar8 + 0x10))(piVar8,uVar4);
          *(undefined4 *)(iVar7 + 0x16b8) = 0;
        }
        if (*(int *)(iVar7 + 0x16c0) != 0) {
          if (((*puVar3 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00270ff4), iVar5 != 0)) {
            FUN_0036788c(DAT_00270ffc);
          }
          FUN_00348904(*(undefined4 *)(iVar9 + 0x47c),*(undefined4 *)(iVar7 + 0x16c0));
          bVar1 = true;
          *(undefined4 *)(iVar7 + 0x16c0) = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
      if (bVar1) {
        *(byte *)(param_2 + 0x7f5c) = *(byte *)(param_2 + 0x7f5c) & 0xfa;
      }
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x16c8) != 0) {
      if (((*DAT_00270ff4 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_00270ff4), iVar6 != 0)) {
        FUN_0036788c(DAT_00270ffc);
      }
      FUN_00348904(*(undefined4 *)(iVar9 + 0x47c),*(undefined4 *)(param_1 + 0x16c8));
      *(undefined4 *)(param_1 + 0x16c8) = 0;
    }
    if (*(int *)(param_1 + 0x16b8) != 0) {
      uVar4 = FUN_003488e4();
      piVar8 = (int *)*puVar2;
      (**(code **)(*piVar8 + 0x10))(piVar8,uVar4);
      *(undefined4 *)(param_1 + 0x16b8) = 0;
    }
    break;
  case 4:
                    /* WARNING: Subroutine does not return */
    FUN_00350be0(param_1 + 0x16e4);
  case 5:
    iVar9 = 0;
    do {
      iVar6 = param_1 + iVar9 * 4;
      iVar7 = *(int *)(iVar6 + 0x16cc);
      if (iVar7 != 0) {
        FUN_003508b8(param_1,iVar7,0);
        *(undefined4 *)(iVar6 + 0x16cc) = 0;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 6);
  }
  FUN_00374428(param_1);
  return;
}
