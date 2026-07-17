// OoT3D decomp @ 002e47c8  name=FUN_002e47c8  size=1536

void FUN_002e47c8(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r5;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  bool bVar11;
  float fVar12;
  
  if (*(char *)(param_1 + 0x100) == '\x03') {
    unaff_r5 = param_1 + 0x3190;
  }
  else if (*(char *)(param_1 + 0x100) == '\x05') {
    unaff_r5 = param_1 + 0x2e4;
  }
  param_2[0x9f] = 0;
  param_2[0xa0] = 0;
  if (param_2 != (undefined4 *)0xfffffffc) {
    func_0x0045243c();
  }
  puVar7 = param_2 + 0x83;
  if (puVar7 != (undefined4 *)0x0) {
    func_0x00343280(puVar7,0x70);
    *puVar7 = 0;
    param_2[0x84] = 0;
    param_2[0x85] = 0;
    param_2[0x86] = 0;
    param_2[0x87] = 0;
    param_2[0x88] = 0;
  }
  if (unaff_r5 != -0xec) {
    func_0x004533a4();
  }
  uVar9 = 0;
  pcVar8 = (char *)(iRam002e4dc8 + param_3 * 0x50);
  uVar10 = 0;
  if (*pcVar8 != '\0') {
    uVar2 = func_0x002de6b8(param_1,pcVar8);
    *param_2 = uVar2;
    if (*(int *)(pcVar8 + 0x40) == 0) {
      uVar2 = func_0x00324fd0(pcVar8);
      *(undefined4 *)(pcVar8 + 0x40) = uVar2;
    }
    func_0x0031b124(param_2 + 0x83,*param_2,*(undefined4 *)(pcVar8 + 0x40),0);
    param_2[0x9f] = 1;
  }
  iVar1 = iRam002e4dd4;
  iVar3 = unaff_r5 + 0xec;
  if (param_3 == 5) {
    func_0x002d56e0(param_2 + 1,param_2 + 0x83,*(undefined4 *)(pcVar8 + 0x44),
                    *(undefined4 *)(pcVar8 + 0x48),*(undefined4 *)(pcVar8 + 0x4c));
    func_0x002d4d34(param_2 + 1,param_2 + 0x83,0,0x23,1,4);
    func_0x002d4d34(param_2 + 1,param_2 + 0x83,2,0x24,1,5);
    func_0x002d5468(param_2 + 1,8,9,0,0);
    func_0x002d5124(iVar3,param_2 + 0x83,2,0,0x20);
    func_0x002d4f10(iVar3,param_2 + 0x83,0,4);
    func_0x002d50e8(iVar3,8,9,0,0);
    return;
  }
  if (param_3 < 6) {
    if (param_3 == 0) {
      func_0x002d5124(iVar3,param_2 + 0x83,2,0,0x20);
      func_0x002d4f10(iVar3,param_2 + 0x83,0,4);
      func_0x002d50e8(iVar3,0,0,*(undefined1 *)(unaff_r5 + 0x13),0);
      return;
    }
    if (param_3 != 1) {
      if (param_3 == 3) {
        func_0x002d56e0(param_2 + 1,param_2 + 0x83,*(undefined4 *)(pcVar8 + 0x44),
                        *(undefined4 *)(pcVar8 + 0x48),*(undefined4 *)(pcVar8 + 0x4c));
        func_0x002d4d34(param_2 + 1,param_2 + 0x83,0,0x23,1,4);
        func_0x002d4d34(param_2 + 1,param_2 + 0x83,2,0x24,1,5);
        func_0x002d5468(param_2 + 1,6,6,0,0);
        func_0x002d5124(iVar3,param_2 + 0x83,2,0,0x20);
        func_0x002d4f10(iVar3,param_2 + 0x83,0,4);
        func_0x002d50e8(iVar3,6,6,0,0);
        return;
      }
      if (param_3 != 4) {
        return;
      }
    }
  }
  else if (param_3 != 6 && param_3 != 8) {
    if (param_3 == 0x1d) {
      func_0x002d56e0(param_2 + 1,param_2 + 0x83,*(undefined4 *)(pcVar8 + 0x44),
                      *(undefined4 *)(pcVar8 + 0x48),*(undefined4 *)(pcVar8 + 0x4c));
      func_0x002d5468(param_2 + 1,0,0,0,0);
      func_0x002d5124(iVar3,param_2 + 0x83,1,0,8);
      func_0x002d50e8(iVar3,0,0,0,0);
    }
    return;
  }
  iVar5 = 0;
  bVar11 = *(char *)(iRam002e4dcc + 0x54d) != '\0';
  iVar4 = iRam002e4dcc;
  if (bVar11) {
    iVar4 = *(int *)(iRam002e4dcc + 0x4e8);
  }
  if ((bVar11 && iVar4 < 4) && (*pbRam002e4dd0 - 1 < 5)) {
    iVar5 = 1;
  }
  iVar4 = 0;
  iVar5 = iRam002e4ddc + iVar5 * 0x48;
  while ((puVar6 = (ushort *)(iVar5 + iVar4 * 8),
         (uint)*(ushort *)(iRam002e4dd4 + 0xa8) < (uint)*puVar6 ||
         (((uint)puVar6[1] <= (uint)*(ushort *)(iRam002e4dd4 + 0xa8) && (puVar6[1] != uRam002e4dd8))
         ))) {
    iVar4 = (int)(short)((short)iVar4 + 1);
    if (8 < iVar4) {
LAB_002e4a7c:
      func_0x002d56e0(param_2 + 1,param_2 + 0x83,*(undefined4 *)(pcVar8 + 0x44),
                      *(undefined4 *)(pcVar8 + 0x48),*(undefined4 *)(pcVar8 + 0x4c));
      if (param_3 == 1) {
        func_0x002d4d34(param_2 + 1,param_2 + 0x83,0,0x23,1,4);
        func_0x002d4d34(param_2 + 1,param_2 + 0x83,2,0x24,1,5);
        func_0x002d4c30(param_2 + 1,param_2 + 0x83,0,0x22);
        func_0x002d5124(iVar3,param_2 + 0x83,2,0,0x20);
        func_0x002d4f10(iVar3,param_2 + 0x83,0,4);
        func_0x002d50e8(iVar3,uVar9,uVar10,*(undefined1 *)(unaff_r5 + 0x13),0);
      }
      else if (param_3 == 4 || param_3 == 6) {
        func_0x002d5124(iVar3,param_2 + 0x83,1,0,8);
        func_0x002d50e8(iVar3,uVar9,uVar10,*(undefined1 *)(unaff_r5 + 0x13),0);
      }
      else if (param_3 == 8) {
        func_0x002d4d34(param_2 + 1,param_2 + 0x83,0,10,1,1);
        func_0x002d4c30(param_2 + 1,param_2 + 0x83,0,9);
        func_0x002d5124(iVar3,param_2 + 0x83,1,0,8);
        func_0x002d4f10(iVar3,param_2 + 0x83,0,2);
        func_0x002d50e8(iVar3,uVar9,uVar10,*(undefined1 *)(unaff_r5 + 0x13),0);
      }
      func_0x002d5468(param_2 + 1,uVar9,uVar10,*(undefined1 *)(unaff_r5 + 0x13),0);
      return;
    }
  }
  uVar9 = *(undefined1 *)(iVar5 + iVar4 * 8 + 5);
  *(undefined1 *)(unaff_r5 + 0x10) = uVar9;
  uVar10 = (undefined1)puVar6[3];
  *(undefined1 *)(unaff_r5 + 0x11) = uVar10;
  if ((char)puVar6[2] == '\0') {
    *(undefined1 *)(unaff_r5 + 0x13) = 0;
  }
  else {
    fVar12 = (float)func_0x00361490(puVar6[1],*puVar6,*(undefined2 *)(iVar1 + 0xa8));
    uVar2 = VectorFloatToUnsigned(fVar12 * fRam002e4de0,3);
    *(char *)(unaff_r5 + 0x13) = (char)uVar2;
  }
  goto LAB_002e4a7c;
}

