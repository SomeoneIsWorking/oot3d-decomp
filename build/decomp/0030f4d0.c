// OoT3D decomp @ 0030f4d0  name=FUN_0030f4d0  size=476

void FUN_0030f4d0(int *param_1,undefined1 param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int unaff_r5;
  int iVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;

  *(undefined1 *)((int)param_1 + 0x15) = param_2;
  iVar4 = **(int **)(*(int *)(param_1[1] + 4) + 0xc);
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    iVar4 = (int)*(short *)(iVar4 + 0xc);
  }
  else {
    iVar4 = *(int *)(iVar4 + 8) - (int)*(short *)(iVar4 + 0xc);
  }
  if (iVar4 < 1) {
    return;
  }
  func_0x0032471c(param_1 + 9);
  if (param_1[4] != 0) {
    func_0x003130a4(param_1[4],1,param_1 + 9);
  }
  func_0x002f9c74(param_1 + 9);
  uVar3 = uRam0030f6ac;
  if ((char)param_1[5] == '\0') {
    iVar4 = 0;
    piVar10 = *(int **)(*(int *)(param_1[1] + 4) + 0xc);
    if (0 < *(int *)(*piVar10 + 8)) {
      do {
        func_0x002ea028(param_1 + 6,uVar3,0x4000);
        func_0x0045257c(param_1,piVar10[4] + iVar4 * 0xc);
        uVar5 = func_0x00314870(param_1 + 6);
        func_0x00454760(param_1[0x17] + iVar4 * 0x18,uVar3,uVar5);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(*piVar10 + 8));
    }
    *(undefined1 *)(param_1 + 5) = 1;
  }
  func_0x00452914(param_1);
  func_0x00452b20(param_1);
  func_0x00452ee4(param_1);
  bVar12 = (char)param_1[5] != '\0';
  cVar1 = '\0';
  if (bVar12) {
    cVar1 = *(char *)(param_1[4] + 0x1b5);
  }
  if (bVar12 && cVar1 != '\0') {
    iVar9 = 0;
    iVar4 = 0;
    piVar10 = *(int **)(*(int *)(param_1[1] + 4) + 0xc);
    if (0 < *(int *)(*piVar10 + 8)) {
      do {
        piVar6 = (int *)(piVar10[4] + iVar4 * 0xc);
        iVar8 = *(int *)(piVar6[2] + 0xc);
        bVar2 = *(byte *)(*piVar6 + 2);
        param_1[0x18] = param_1[0x17] + iVar4 * 0x18;
        if (0 < *(int *)(*(int *)(iVar8 + (short)(ushort)bVar2 * 0x1cc) + 8)) {
          func_0x004547bc(param_1 + 0x18,*(int *)(param_1[4] + 0x1a8) + 0x30,
                          *(undefined4 *)(param_1[0x20] + iVar9 * 4));
        }
        iVar4 = iVar4 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar4 < *(int *)(*piVar10 + 8));
    }
  }
  iVar4 = 0;
  iVar9 = *(int *)(*(int *)(param_1[1] + 4) + 0xc);
  bVar12 = *(char *)((int)param_1 + 0x15) == '\0';
  if (bVar12) {
    unaff_r5 = 0;
  }
  iVar7 = **(int **)(*(int *)(param_1[1] + 4) + 0xc);
  iVar11 = (int)*(short *)(iVar7 + 0xc);
  iVar8 = iVar11;
  if (!bVar12) {
    iVar8 = *(int *)(iVar7 + 8) - iVar11;
    unaff_r5 = iVar11;
  }
  if (0 < iVar8) {
    do {
      piVar10 = (int *)(*(int *)(iVar9 + 0x10) + unaff_r5 * 0xc);
      iVar7 = *piVar10;
      if (*(char *)(param_1[0x1b] + (uint)*(byte *)(iVar7 + 3)) != '\0') {
        bVar2 = *(byte *)(iVar7 + 2);
        piVar10 = (int *)(*(int *)(piVar10[2] + 0xc) + (short)(ushort)bVar2 * 0x1cc);
        func_0x0032471c(param_1 + 9);
        if (*(char *)(*piVar10 + 2) == '\0') {
          func_0x002dd6d0(param_1 + 9);
        }
        else {
          func_0x0047d68c(param_1[4],1,param_1 + 9);
        }
        (**(code **)(*param_1 + 0x24))(param_1,piVar10);
        (**(code **)(*param_1 + 0x20))(param_1,piVar10,bVar2);
        (**(code **)(*param_1 + 0x14))(param_1,piVar10,bVar2);
        func_0x002f9c74(param_1 + 9);
        func_0x00466e0c(param_1[0x17] + unaff_r5 * 0x18);
      }
      iVar4 = iVar4 + 1;
      unaff_r5 = unaff_r5 + 1;
    } while (iVar4 < iVar8);
  }
  return;
}
