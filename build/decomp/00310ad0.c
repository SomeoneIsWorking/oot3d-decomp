// OoT3D decomp @ 00310ad0  name=FUN_00310ad0  size=1180

void FUN_00310ad0(uint param_1,uint param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  bool bVar13;

  iVar3 = DAT_00310f70;
  puVar11 = (uint *)*DAT_00310f6c;
  piVar10 = *(int **)(DAT_00310f70 + 8);
  if (param_1 == 0) {
    iVar5 = *piVar10;
    if (iVar5 != 0) {
      param_2 = (uint)*(byte *)(iVar5 + 0x15);
    }
    if (iVar5 != 0 && param_2 != 0) {
      FUN_00303280(*(undefined4 *)(iVar5 + 4));
      *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0;
    }
    **(undefined4 **)(iVar3 + 8) = 0;
    puVar11[7] = 0;
    *(undefined1 *)((int)puVar11 + 0x1b) = 0;
    return;
  }
  piVar12 = (int *)piVar10[(param_1 & 0x1ff) + 2];
  if (piVar12 != (int *)0x0) {
    do {
      puVar1 = (uint *)(piVar12 + 1);
      if (*puVar1 != param_1) {
        piVar12 = (int *)*piVar12;
      }
    } while (*puVar1 != param_1 && piVar12 != (int *)0x0);
  }
  piVar8 = (int *)*piVar10;
  uVar6 = *puVar11;
  if (piVar8 != piVar12) {
    uVar6 = uVar6 | 0x8000;
  }
  if ((piVar8 == (int *)0x0) || (piVar12[0xf9] != piVar8[0xf9])) {
    uVar6 = uVar6 | 0x1f00000;
  }
  else {
    if (piVar12[0xfa] != piVar8[0xfa]) {
      uVar6 = uVar6 | 0x200000;
    }
    if ((char)piVar12[0xfd] == '\0') {
      piVar8 = (int *)(uint)*(byte *)(piVar8 + 0xfd);
      if (piVar8 != (int *)0x0) {
        uVar6 = uVar6 | 0x1200000;
      }
    }
    else if ((char)piVar8[0xfd] == '\0') {
      uVar6 = uVar6 | 0xc00000;
    }
    else {
      piVar8 = (int *)piVar8[0xfb];
      if ((int *)piVar12[0xfb] != piVar8) {
        uVar6 = uVar6 | 0x400000;
      }
    }
  }
  *puVar11 = uVar6;
  piVar7 = (int *)*piVar10;
  if (piVar7 == (int *)0x0) {
LAB_00310bf4:
    piVar12[0x6d] = -1;
    piVar12[0x6e] = -1;
    piVar12[0x6f] = -1;
    iVar5 = 3;
    piVar8 = piVar12 + 0x1e9;
    if ((char)piVar12[0xfd] != '\0') {
      piVar12[0xd2] = -1;
      piVar12[0xd3] = -1;
      piVar12[0xd4] = -1;
      piVar8 = piVar12 + 0x1e9;
    }
    do {
      piVar8[1] = -1;
      iVar5 = iVar5 + -1;
      piVar8 = piVar8 + 2;
      *piVar8 = -1;
    } while (iVar5 != 0);
    *puVar11 = *puVar11 | 0x200013c;
  }
  else {
    if (piVar7 == piVar12) {
      piVar8 = (int *)(uint)*(byte *)((int)piVar12 + 0x17);
    }
    if (piVar7 == piVar12 && piVar8 == (int *)0x1) goto LAB_00310bf4;
    if (piVar7 != piVar12) {
      piVar12[0x6d] = -1;
      piVar12[0x6e] = -1;
      piVar12[0x6f] = -1;
      iVar5 = 3;
      piVar8 = piVar12 + 0x1e9;
      if ((char)piVar12[0xfd] != '\0') {
        piVar12[0xd2] = -1;
        piVar12[0xd3] = -1;
        piVar12[0xd4] = -1;
        piVar8 = piVar12 + 0x1e9;
      }
      do {
        piVar8[1] = -1;
        iVar5 = iVar5 + -1;
        piVar8 = piVar8 + 2;
        *piVar8 = -1;
        fVar4 = DAT_00310f74;
      } while (iVar5 != 0);
      if ((piVar12[0x158] & 1U) != 0) {
        *puVar11 = *puVar11 | 8;
      }
      if (piVar12[0x363] != 0) {
        *puVar11 = *puVar11 | 0x20;
      }
      if ((piVar12[0x17d] & 1U) != 0) {
        *puVar11 = *puVar11 | 0x10;
      }
      if ((piVar12[0x17d] & 2U) != 0) {
        *puVar11 = *puVar11 | 0x2000000;
      }
      if (*(char *)((int)puVar11 + 0x57b) != '\0') {
        *puVar11 = *puVar11 | 0x100;
      }
      if ((float)piVar12[0x373] == fVar4) {
        *puVar11 = *puVar11 | 4;
      }
    }
  }
  iVar5 = piVar12[0x36b];
  iVar9 = iVar5 - DAT_00310f78;
  if (iVar5 == DAT_00310f78) {
LAB_00310d48:
    if ((char)puVar11[0x41] != '\x01') {
      *(undefined1 *)(puVar11 + 0x41) = 1;
      *puVar11 = *puVar11 | 0x400;
    }
    cVar2 = *(char *)((int)puVar11 + 0x107);
  }
  else {
    if (DAT_00310f78 <= iVar5) {
      if (iVar9 != 1) {
        iVar5 = iVar9 + -0x1700;
      }
      if (iVar9 == 1 || iVar5 == 0x12) {
        if ((char)puVar11[0x41] != '\0') {
          *(undefined1 *)(puVar11 + 0x41) = 0;
          *puVar11 = *puVar11 | 0x400;
        }
        if (*(char *)((int)puVar11 + 0x107) != '\x01') {
          *(undefined1 *)((int)puVar11 + 0x107) = 1;
          *puVar11 = *puVar11 | 0x400;
        }
      }
      goto LAB_00310dcc;
    }
    if (iVar5 != 0) {
      iVar9 = 0;
      if (iVar5 != 0xde1) {
        iVar9 = iVar5 + -0x6de1;
      }
      if (iVar5 != 0xde1 && iVar9 != 0x1f) goto LAB_00310dcc;
      goto LAB_00310d48;
    }
    if ((char)puVar11[0x41] != '\0') {
      *(undefined1 *)(puVar11 + 0x41) = 0;
      *puVar11 = *puVar11 | 0x400;
    }
    cVar2 = *(char *)((int)puVar11 + 0x107);
  }
  if (cVar2 != '\0') {
    *(undefined1 *)((int)puVar11 + 0x107) = 0;
    *puVar11 = *puVar11 | 0x400;
  }
LAB_00310dcc:
  if (puVar11[0x3e] != piVar12[0x36b]) {
    puVar11[0x3e] = piVar12[0x36b];
    *puVar11 = *puVar11 | 0x400;
  }
  if (piVar12[0x36c] == 0) {
    if (*(char *)((int)puVar11 + 0x105) != '\0') {
      *(undefined1 *)((int)puVar11 + 0x105) = 0;
      *puVar11 = *puVar11 | 0x800;
    }
  }
  else if ((piVar12[0x36c] == 0xde1) && (*(char *)((int)puVar11 + 0x105) != '\x01')) {
    *(undefined1 *)((int)puVar11 + 0x105) = 1;
    *puVar11 = *puVar11 | 0x800;
  }
  if (puVar11[0x3f] != piVar12[0x36c]) {
    puVar11[0x3f] = piVar12[0x36c];
    *puVar11 = *puVar11 | 0x800;
  }
  if (piVar12[0x36d] == 0) {
    if (*(char *)((int)puVar11 + 0x106) != '\0') {
      *(undefined1 *)((int)puVar11 + 0x106) = 0;
      *puVar11 = *puVar11 | 0x1000;
    }
  }
  else if ((piVar12[0x36d] == 0xde1) && (*(char *)((int)puVar11 + 0x106) != '\x01')) {
    *(undefined1 *)((int)puVar11 + 0x106) = 1;
    *puVar11 = *puVar11 | 0x1000;
  }
  piVar8 = (int *)puVar11[0x40];
  if (piVar8 != (int *)piVar12[0x36d]) {
    puVar11[0x40] = (uint)piVar12[0x36d];
    *puVar11 = *puVar11 | 0x1000;
  }
  *(undefined1 *)((int)piVar12 + 0x17) = 0;
  piVar7 = (int *)*piVar10;
  if (piVar7 != (int *)0x0) {
    bVar13 = piVar7 == piVar12;
    if (!bVar13) {
      piVar7 = (int *)piVar7[0x36e];
      piVar8 = (int *)piVar12[0x36e];
    }
    if (((bVar13 || piVar7 == piVar8) || (*puVar11 = *puVar11 | 0x100, *piVar10 != 0)) &&
       (piVar10 = (int *)*piVar10, *(char *)((int)piVar10 + 0x15) != '\0' && piVar10 != piVar12)) {
      FUN_00303280(piVar10[1]);
    }
  }
  **(undefined4 **)(iVar3 + 8) = piVar12;
  puVar11[7] = param_1;
  *(char *)((int)puVar11 + 0x1b) = (char)piVar12[0xfd];
  return;
}
