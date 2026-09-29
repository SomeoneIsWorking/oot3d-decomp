// OoT3D decomp @ 0047cccc  name=FUN_0047cccc  size=272

void FUN_0047cccc(int *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;

  *(undefined2 *)(param_1 + 1) = 0;
  iVar6 = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  if (*(short *)((int)param_1 + 6) != 0) {
    do {
      FUN_00347774(*(undefined4 *)(*param_1 + iVar6 * 4),0);
      piVar3 = *(int **)(*param_1 + iVar6 * 4);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)*(ushort *)((int)param_1 + 6));
  }
  puVar2 = DAT_0047cde4;
  iVar6 = DAT_0047cde0;
  puVar1 = DAT_0047cddc;
  iVar7 = 0;
  if (*(short *)((int)param_1 + 0xe) != 0) {
    do {
      if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0047cddc), iVar4 != 0)) {
        FUN_0036788c(DAT_0047cde8);
      }
      FUN_00348904(*(undefined4 *)(iVar6 + 0x47c),*(undefined4 *)(param_1[4] + iVar7 * 4));
      if (*(int *)(param_1[5] + iVar7 * 4) != 0) {
        uVar5 = FUN_003488e4();
        (**(code **)(*(int *)*puVar2 + 0x10))((int *)*puVar2,uVar5);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*(ushort *)((int)param_1 + 0xe));
  }
  FUN_0034fc6c(param_1[7]);
  return;
}
