// OoT3D decomp @ 0037073c  name=FUN_0037073c  size=1956

/* WARNING: Possible PIC construction at 0x00343d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00343d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00343e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00343ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00343e0c) */
/* WARNING: Removing unreachable block (ram,0x00343d5c) */
/* WARNING: Removing unreachable block (ram,0x00343ea4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0037073c(int param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  uint unaff_r4;
  char *pcVar8;
  int iVar9;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int iVar10;
  int unaff_r8;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 unaff_lr;
  bool bVar13;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  *(undefined2 *)(param_1 + 0x2b9e) = 0;
  func_0x00343f0c(param_1,param_1 + 0x224c);
  iVar7 = iRam00343ecc;
  iVar4 = iRam00343ec4;
  iVar9 = param_1 + 0x28a0;
  puVar12 = &uStack_30;
  *(undefined1 *)(param_1 + 0x2ba1) = 0;
  iVar10 = iRam00343ec8;
  *(undefined2 *)(iVar4 + 10) = 0;
  uVar11 = *(uint *)(iVar7 + 0xbc);
  puVar6 = (ushort *)(iVar4 + 0x40);
  iVar7 = 0xc;
  puVar3 = (uint *)(iVar10 + 0x18);
  do {
    if ((*puVar3 & uVar11) != 0) {
      *(ushort *)(iVar4 + 10) = *puVar6 | *(ushort *)(iVar4 + 10);
    }
    iVar5 = iRam00343ec4;
    iVar7 = iVar7 + -1;
    puVar6 = puVar6 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar7 != 0);
  if (*(char *)(iRam00343ed0 + 0x2dd) != '\0') {
    *(ushort *)(iVar4 + 10) = *(ushort *)(iVar4 + 10) | 0x1000;
  }
  *(ushort *)(iVar5 + 8) = (ushort)*(undefined4 *)(iVar10 + 0x3c) & (ushort)uVar11;
  iVar4 = func_0x002d0258();
  *(int *)(param_1 + 0x2a80) = iVar4;
  *(undefined2 *)(iVar5 + 2) = 0;
  *(undefined1 *)(iVar4 + 2) = 0;
  *(undefined2 *)(iVar5 + 4) = 0;
  func_0x0033f2d8();
  iVar10 = param_1 + 0x2aa0;
  *(undefined1 *)(param_1 + 0x2ba0) = 0xff;
  *(undefined2 *)(param_1 + 0x2b82) = 0xff;
  *(undefined2 *)(iVar5 + 6) = 0xff;
  iVar4 = iRam00343edc;
  puVar3 = puRam00343ed8;
  bVar2 = true;
  if (param_2 < uRam00343ed4) {
    if (param_2 == 0x2e) {
      *(undefined2 *)(param_1 + 0x2b80) = 0x2e;
      if (((*puVar3 & 1) == 0) && (iVar7 = func_0x003679b4(puRam00343ed8), iVar7 != 0)) {
        func_0x0036788c(uRam00343ee8);
      }
      func_0x002d0320(iVar4,uRam00343eec,0);
      if ((*puVar3 & 1) == 0) {
        iVar7 = func_0x003679b4(puRam00343ed8);
        goto joined_r0x00343bc4;
      }
      goto LAB_00343ccc;
    }
    bVar13 = param_2 != 0;
    if (param_2 != 1) {
      bVar13 = 0x21 < param_2;
    }
    *(short *)(param_1 + 0x2b80) = (short)param_2;
    if (!bVar13) {
      bVar2 = false;
      if (param_2 < 0xf) {
        if (((*puVar3 & 1) == 0) && (iVar7 = func_0x003679b4(puRam00343ed8), iVar7 != 0)) {
          func_0x0036788c(uRam00343ee8);
        }
        func_0x002d0320(iVar4,param_2 + 0x86e,0);
        if ((*puVar3 & 1) == 0) {
          iVar7 = func_0x003679b4(puRam00343ed8);
          goto joined_r0x00343bc4;
        }
      }
      else {
        if (((*puVar3 & 1) == 0) && (iVar7 = func_0x003679b4(puRam00343ed8), iVar7 != 0)) {
          func_0x0036788c(uRam00343ee8);
        }
        func_0x002d0320(iVar4,uRam00343eec,0);
        if ((*puVar3 & 1) == 0) {
          iVar7 = func_0x003679b4(puRam00343ed8);
joined_r0x00343bc4:
          if (iVar7 != 0) {
            func_0x0036788c(uRam00343ee8);
          }
        }
      }
      goto LAB_00343ccc;
    }
    if (param_2 == 0x2d || param_2 == 0x2b) {
      if (((*puVar3 & 1) == 0) && (iVar7 = func_0x003679b4(puRam00343ed8), iVar7 != 0)) {
        func_0x0036788c(uRam00343ee8);
      }
      func_0x002d0320(iVar4,0x8a0,0);
      if ((*puVar3 & 1) == 0) {
        iVar7 = func_0x003679b4(puRam00343ed8);
        goto joined_r0x00343bc4;
      }
      goto LAB_00343ccc;
    }
    if (((*puVar3 & 1) == 0) && (iVar7 = func_0x003679b4(puRam00343ed8), iVar7 != 0)) {
      func_0x0036788c(uRam00343ee8);
    }
    func_0x002d0320(iVar4,uRam00343ef0,0);
    if (param_2 - 0x22 < 6) {
      uStack_30 = uRam00343ef8;
      uStack_2c = uRam00343ef4;
      func_0x0037547c(uRam00343efc,0,4,uRam00343ef8);
      if ((*puVar3 & 1) == 0) {
        iVar7 = func_0x003679b4(puRam00343ed8);
        goto joined_r0x00343bc4;
      }
      goto LAB_00343ccc;
    }
    if ((param_2 != 1 && param_2 != 0x30) && param_2 != 0x2f) {
      if ((*puVar3 & 1) == 0) {
        iVar7 = func_0x003679b4(puRam00343ed8);
        goto joined_r0x00343bc4;
      }
      goto LAB_00343ccc;
    }
    if (((*puVar3 & 1) == 0) && (iVar7 = func_0x003679b4(puRam00343ed8), iVar7 != 0)) {
      func_0x0036788c(uRam00343ee8);
    }
    *(undefined1 *)(iVar4 + 0xd) = 0;
  }
  else {
    if (((*puRam00343ed8 & 1) == 0) && (iVar7 = func_0x003679b4(puRam00343ed8), iVar7 != 0)) {
      func_0x0036788c(iVar4 + -0x32c0);
    }
    func_0x002d0320(iVar4,param_2,0);
    if ((*puVar3 & 1) == 0) {
      iVar7 = func_0x003679b4(puRam00343ed8);
      goto joined_r0x00343bc4;
    }
LAB_00343ccc:
    *(undefined1 *)(iVar4 + 0xd) = 1;
  }
  iVar7 = iRam00343f00;
  *(undefined4 *)(param_1 + 0x2b98) = 0;
  *(undefined2 *)(param_1 + 0x2b78) = 0;
  *(undefined2 *)(iVar7 + param_1) = 0;
  iVar7 = *piRam00343f04;
  *(undefined2 *)(iVar7 + 0x4b4) = 0x200;
  *(undefined2 *)(iVar7 + 0x4b6) = 0x200;
  *(undefined2 *)(iVar7 + 0x4c0) = 0x100;
  *(undefined2 *)(iVar7 + 0x4c2) = 0x40;
  if (*(short *)(iVar7 + 0x4ac) == 0) {
    *(undefined1 *)(param_1 + 0x2b73) = 3;
    iVar4 = iRam00343f08;
    *(undefined2 *)(param_1 + 0x2b94) = *(undefined2 *)(param_1 + 0x2b92);
    if (bVar2) {
      func_0x00499038(param_1,0x12);
      iVar4 = iRam0034be2c;
      if (*(short *)(iRam0034be2c + 0x7a) != 10) {
        *(undefined2 *)(iRam0034be2c + 0x78) = 10;
        *(undefined2 *)(iVar4 + 0x7a) = 10;
        *(undefined2 *)(iVar4 + 0x7c) = 1;
      }
      return;
    }
    if (param_2 == 1 || param_2 == 0x30) {
      func_0x00340bdc(param_1,9);
      *(undefined1 *)(param_1 + 0x2a88) = 4;
      return;
    }
    if (param_2 == 0x2f) {
      uVar11 = 0x31;
      unaff_lr = 0x343e0c;
      unaff_r6 = param_1;
      puVar12 = &uStack_30;
    }
    else if (param_2 == 0x2e) {
      func_0x0034be04(1);
      uVar11 = 0x29;
      param_2 = unaff_r4;
      iVar9 = unaff_r5;
      iVar4 = unaff_r7;
      iVar10 = unaff_r8;
      puVar12 = (undefined4 *)register0x00000054;
    }
    else if (param_2 == 0x2b) {
      func_0x003523dc(1);
      func_0x003523dc(1);
      iVar5 = func_0x0033f400();
      iVar7 = iRam00343ec4;
      *(int *)(param_1 + 0x2a80) = iVar5;
      *(undefined2 *)(iVar7 + 4) = 0;
      *(undefined2 *)(iVar7 + 2) = 0;
      *(undefined1 *)(iVar5 + 2) = 0;
      func_0x0033f2d8();
      *(undefined1 *)(param_1 + 0x2b73) = 5;
      uVar11 = 0x23;
      unaff_lr = 0x343ea4;
      unaff_r6 = param_1;
    }
    else {
      uVar11 = 5;
      param_2 = unaff_r4;
      iVar9 = unaff_r5;
      iVar4 = unaff_r7;
      iVar10 = unaff_r8;
      puVar12 = (undefined4 *)register0x00000054;
    }
  }
  else {
    uVar11 = 4;
    *(undefined1 *)(param_1 + 0x2b73) = 0;
    unaff_lr = 0x343d30;
    unaff_r6 = param_1;
    puVar12 = &uStack_30;
  }
  iVar7 = iRam00340cfc;
  *(undefined4 *)((int)puVar12 + -4) = unaff_lr;
  *(int *)((int)puVar12 + -8) = iVar10;
  *(int *)((int)puVar12 + -0xc) = iVar4;
  *(int *)((int)puVar12 + -0x10) = unaff_r6;
  *(int *)((int)puVar12 + -0x14) = iVar9;
  *(uint *)((int)puVar12 + -0x18) = param_2;
  if (*(byte *)(param_1 + 0x2a90) == uVar11) {
    return;
  }
  if (uVar11 == 5) goto LAB_00340cf4;
  pcVar8 = (char *)(iRam00340cfc + uVar11 * 4);
  if (*(char *)(iRam00340cfc + (uint)*(byte *)(param_1 + 0x2a90) * 4) == '\0') {
    if (*pcVar8 != '\0') {
      iVar4 = func_0x0043c1ec();
      if ((iVar4 == 0) || (iVar4 = func_0x0043c1ec(), iVar4 == 3)) {
        if (pcVar8[3] == '\0') {
          func_0x0032c570(0);
        }
        else {
          func_0x0032c570(*(short *)(param_1 + 0x2b80) == 1);
        }
      }
      if (*(char *)(iVar7 + (uint)*(byte *)(param_1 + 0x2a90) * 4) != '\0') goto LAB_00340c84;
    }
  }
  else {
LAB_00340c84:
    if ((*pcVar8 == '\0') &&
       (cVar1 = *(char *)(param_1 + 0x2a90), (cVar1 != '\x1e' && cVar1 != '\x1f') && cVar1 != '\x1a'
       )) {
      func_0x004bdea4(*(char *)(param_1 + 0x2ba1) != '\0');
    }
  }
  func_0x0032c560(pcVar8[1] != '\0');
  func_0x0032c550(pcVar8[2] != '\0');
  func_0x0032c540(pcVar8[3] != '\0');
LAB_00340cf4:
  *(char *)(param_1 + 0x2a90) = (char)uVar11;
  return;
}

