// OoT3D decomp @ 00407c3c  name=FUN_00407c3c  size=424

void FUN_00407c3c(int param_1,char *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined2 uStack_4e;
  undefined2 local_4c [16];
  int local_2c;
  int local_28;

  *(char *)(param_1 + 0x7c) = param_2[1];
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  local_28 = FUN_00308c20(uVar2,*param_2);
  FUN_00308c20(*(undefined4 *)(param_2 + 0x10),*param_2);
  iVar8 = 0;
  local_2c = *(int *)(*(int *)(param_1 + 0x134) + 8);
  if (0 < local_2c) {
    do {
      iVar3 = param_1 + iVar8 * 6;
      iVar9 = *(int *)(param_2 + iVar8 * 0x30 + 0x14);
      if (*param_2 == '\x03') {
        *(undefined2 *)(iVar3 + 0x60) = *(undefined2 *)(param_2 + iVar8 * 0x30 + 0x38);
        *(undefined2 *)(iVar3 + 0x62) = *(undefined2 *)(param_2 + iVar8 * 0x30 + 0x3a);
        *(undefined2 *)(iVar3 + 100) = *(undefined2 *)(param_2 + iVar8 * 0x30 + 0x3c);
        if (param_2[1] != '\0') {
          *(undefined2 *)(iVar3 + 0x6c) = *(undefined2 *)(param_2 + iVar8 * 0x30 + 0x3e);
          *(undefined2 *)(iVar3 + 0x6e) = *(undefined2 *)(param_2 + iVar8 * 0x30 + 0x40);
          *(undefined2 *)(iVar3 + 0x70) = *(undefined2 *)(param_2 + iVar8 * 0x30 + 0x42);
        }
        puVar5 = &uStack_4e;
        uVar7 = *(undefined2 *)(param_2 + iVar8 * 0x30 + 0x18);
        iVar6 = 8;
        pcVar4 = param_2 + iVar8 * 0x30 + 0x16;
        do {
          uVar1 = *(undefined2 *)(pcVar4 + 4);
          puVar5[1] = uVar7;
          uVar7 = *(undefined2 *)(pcVar4 + 6);
          iVar6 = iVar6 + -1;
          puVar5 = puVar5 + 2;
          *puVar5 = uVar1;
          pcVar4 = pcVar4 + 4;
        } while (iVar6 != 0);
        FUN_00493568(*(undefined4 *)(param_1 + 0x134),iVar8,local_4c);
      }
      piVar10 = (int *)(param_1 + iVar8 * 0x30);
      piVar11 = piVar10 + 6;
      FUN_00308c00(piVar10);
      *piVar10 = iVar9;
      piVar10[1] = *(int *)(param_2 + 0x10);
      *(undefined1 *)(piVar10 + 4) = 0;
      if (*param_2 == '\x03') {
        piVar10[2] = iVar3 + 0x60;
      }
      iVar6 = 1 - (uint)(byte)param_2[1];
      if (1 < (byte)param_2[1]) {
        iVar6 = 0;
      }
      FUN_00308bd8(*(undefined4 *)(param_1 + 0x134),iVar8,piVar10,iVar6);
      if (param_2[1] != '\0') {
        FUN_00308c00(piVar11);
        *piVar11 = local_28 + iVar9;
        piVar10[7] = *(int *)(param_2 + 0x10) - *(int *)(param_1 + 0x78);
        *(undefined1 *)(piVar10 + 10) = 1;
        if (*param_2 == '\x03') {
          piVar10[8] = iVar3 + 0x6c;
        }
        FUN_00308bd8(*(undefined4 *)(param_1 + 0x134),iVar8,piVar11,1);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_2c);
  }
  return;
}
