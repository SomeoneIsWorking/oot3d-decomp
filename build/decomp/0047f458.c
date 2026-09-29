// OoT3D decomp @ 0047f458  name=FUN_0047f458  size=688

void FUN_0047f458(int param_1,undefined4 param_2)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_r1;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined1 auStack_2c [12];

  if (*(char *)(param_1 + 0x15) != '\0') {
    if ((*(ushort *)(param_1 + 0x20) & 4) != 0) {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          if (*(int *)(param_1 + iVar5 * 4) != 0) {
            FUN_002ce018();
            param_2 = extraout_r1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 8));
      }
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffb;
    }
    puVar1 = DAT_0047f708;
    if ((*(ushort *)(param_1 + 0x20) & 0x40) != 0) {
      if ((*DAT_0047f708 & 1) == 0) {
        uVar10 = FUN_003679b4(DAT_0047f708);
        param_2 = (int)((ulonglong)uVar10 >> 0x20);
        if ((int)uVar10 != 0) {
          FUN_0030c5b8(DAT_0047f70c);
          param_2 = DAT_0047f714;
        }
      }
      FUN_002cdfa0(DAT_0047f70c,param_2);
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          if (*(int *)(param_1 + iVar5 * 4) != 0) {
            FUN_00489c7c();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 8));
      }
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffbf;
    }
    if ((*(ushort *)(param_1 + 0x20) & 8) != 0) {
      FUN_002cdee4(param_1);
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfff7;
    }
    if ((*(ushort *)(param_1 + 0x20) & 0x10) != 0) {
      uVar3 = FUN_004867cc(*(undefined4 *)(param_1 + 0x38));
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          iVar6 = *(int *)(param_1 + iVar5 * 4);
          if (iVar6 != 0) {
            if (uVar3 < 16000) {
              FUN_002cdec4(iVar6,1);
              FUN_00485908(iVar6,uVar3);
            }
            else {
              FUN_002cdec4(iVar6,0);
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 8));
      }
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffef;
    }
    fVar2 = DAT_0047f718;
    if ((*(ushort *)(param_1 + 0x20) & 0x20) != 0) {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          iVar6 = *(int *)(param_1 + iVar5 * 4);
          if (iVar6 != 0) {
            if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0047f708), iVar4 != 0)) {
              FUN_0030c5b8(DAT_0047f70c);
            }
            piVar7 = *(int **)(DAT_0047f70c + (uint)*(byte *)(param_1 + 0x22) * 4 + 0x84);
            bVar9 = piVar7 == (int *)0x0;
            bVar8 = true;
            if (!bVar9) {
              bVar9 = *(float *)(param_1 + 0x3c) == fVar2;
              bVar8 = fVar2 <= *(float *)(param_1 + 0x3c);
            }
            if (bVar8 && !bVar9) {
              FUN_002c4908(iVar6,1);
              (**(code **)(*piVar7 + 8))
                        (*(undefined4 *)(param_1 + 0x3c),piVar7,*(undefined1 *)(param_1 + 0x22),
                         auStack_2c);
              FUN_00489c0c(iVar6,auStack_2c);
            }
            else {
              FUN_002c4908(iVar6,0);
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 8));
      }
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffdf;
    }
  }
  return;
}
