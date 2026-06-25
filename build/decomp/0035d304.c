// OoT3D decomp @ 0035d304  name=FUN_0035d304  size=1392

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0035d304(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 int param_5_00,short param_6,undefined param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  undefined4 uVar9;
  
  iVar6 = -1;
  if ((*(uint *)(param_4 + 0x1710) & 0x2000) != 0) {
    iVar5 = *(int *)(param_4 + 0x2cc);
    *(undefined4 *)(param_4 + 0x2ac) = *(undefined4 *)(iVar5 + 0x40);
    *(undefined4 *)(param_4 + 0x2b0) = *(undefined4 *)(iVar5 + 0x50);
    *(undefined4 *)(param_4 + 0x2b4) = *(undefined4 *)(iVar5 + 0x60);
    FUN_002bc768(param_4,3);
  }
  uVar2 = DAT_0035d72c;
  *(undefined *)(param_4 + 0x227c) = 0;
  FUN_0036f59c(param_4,uVar2);
  cVar1 = *(char *)(param_4 + 0x2488);
  bVar8 = cVar1 == '\0';
  if (bVar8) {
    cVar1 = *(char *)(param_4 + 2);
  }
  if ((bVar8 && cVar1 == '\x02') &&
     (iVar5 = FUN_00352dbc(param_3,(int)(short)-(ushort)*(byte *)(param_4 + 0xb8)), iVar5 == 0)) {
    *(uint *)(param_4 + 0x1714) = *(uint *)(param_4 + 0x1714) & 0xffffff7f;
    bVar8 = (*(ushort *)(param_4 + 0x90) & 1) == 0;
    if (bVar8) {
      bVar8 = (*(uint *)(param_4 + 0x1710) & 0x8000000) == 0;
    }
    if (!bVar8) {
      return;
    }
    FUN_00345394(param_4,param_3);
    return;
  }
  uVar3 = DAT_0035d734;
  uVar9 = DAT_0035d730;
  uVar2 = DAT_0035d738;
  if (-1 < *(char *)(param_4 + 0x2488)) {
    *(undefined *)(param_4 + 0x2488) = param_5;
    uVar2 = DAT_0035d738;
    *(undefined *)(param_4 + 0x227b) = 0;
  }
  if (param_5_00 == 3) {
    FUN_0036055c(param_3,param_4,DAT_0035d73c,0);
    iVar6 = DAT_0035d740;
    *(undefined4 *)(param_4 + 0x6c) = uVar2;
    *(undefined4 *)(param_4 + 0x221c) = uVar2;
    *(undefined *)(param_4 + 0x1749) = 0;
    *(undefined4 *)(iVar6 + 0xcc) = uVar9;
    *(undefined *)(iVar6 + 0xd4) = 0;
    iVar6 = 0x96;
    FUN_0036f59c(param_4,DAT_0035d744);
    if (*(char *)(param_4 + 2) == '\x02') {
      FUN_0036f59c(param_4,DAT_0035d748 + (uint)*(ushort *)(*(int *)(param_4 + 0x170c) + 0xf4));
    }
    else {
      FUN_0036aeb4(param_4 + 0x28);
    }
    goto LAB_0035d86c;
  }
  if (param_5_00 == 4) {
    FUN_0036055c(param_3,param_4,DAT_0035d74c,0);
    FUN_003404a8(uVar3,param_4 + 0x254,param_3,0xb7);
    iVar5 = DAT_0035d740;
    *(undefined4 *)(param_4 + 0x6c) = uVar2;
    *(undefined4 *)(param_4 + 0x221c) = uVar2;
    *(undefined *)(param_4 + 0x1749) = 0;
    *(undefined4 *)(iVar5 + 0xcc) = uVar9;
    *(undefined *)(iVar5 + 0xd4) = 0;
    *(undefined2 *)(param_4 + 0x2238) = 0x14;
    goto LAB_0035d86c;
  }
  param_6 = param_6 - *(short *)(param_4 + 0xbe);
  iVar5 = (int)param_6;
  if ((*(uint *)(param_4 + 0x1710) & 0x8000000) == 0) {
    bVar8 = param_5_00 == 1 || param_5_00 == 2;
    if (param_5_00 != 1 && param_5_00 != 2) {
      bVar8 = (*(ushort *)(param_4 + 0x90) & 1) == 0;
    }
    if ((!bVar8) && ((*(uint *)(param_4 + 0x1710) & DAT_0035d758) == 0)) {
      if ((DAT_0035d778 < *(int *)(param_4 + 0x221c)) && (iVar6 = FUN_003518cc(param_4), iVar6 == 0)
         ) {
        *(undefined *)(param_4 + 0x227c) = 0x1e;
        if (*(char *)(param_4 + 2) == '\x02') {
          FUN_0036f59c(param_4,*(ushort *)(*(int *)(param_4 + 0x170c) + 0xf4) + 0x10004f0);
          return;
        }
        FUN_0037547c(DAT_0035d770,param_4 + 0x28,4,DAT_0036aee8 + 0x60);
        return;
      }
      piVar7 = DAT_0035d8c8;
      if (((*(uint *)(param_4 + 0x29b8) & 0x200) == 0) &&
         (((*(char *)(param_4 + 0x174e) != '\x01' || (*DAT_0035d8c4 < 'Q')) ||
          ((*(uint *)(param_4 + 0x29b8) & 0x400) != 0)))) {
        piVar7 = DAT_0035d8cc;
      }
      uVar9 = FUN_0036055c(param_3,param_4,DAT_0035d8d0,0);
      *(undefined4 *)(param_4 + 0x2260) = uVar2;
      *(undefined4 *)(param_4 + 0x225c) = uVar2;
      if (4 < *(byte *)(param_4 + 0xb8)) {
        piVar7 = piVar7 + 4;
        uVar9 = DAT_0035d8d4;
      }
      if (4 < *(byte *)(param_4 + 0xb8)) {
        *(undefined4 *)(param_4 + 0x221c) = uVar9;
      }
      if (iVar5 + 0x4000U < 0x8001) {
        piVar7 = piVar7 + 2;
      }
      iVar6 = FUN_003518cc(param_4);
      if (iVar6 != 0) {
        piVar7 = piVar7 + 1;
      }
      cVar1 = *(char *)(param_4 + 2);
      iVar6 = *piVar7;
      goto joined_r0x0035d810;
    }
    FUN_0036055c(param_3,param_4,DAT_0035d75c,0);
    *(byte *)(param_4 + 0x172a) = *(byte *)(param_4 + 0x172a) | 2;
    iVar4 = DAT_0035d740;
    *(undefined4 *)(param_4 + 0x6c) = uVar2;
    *(undefined4 *)(param_4 + 0x221c) = uVar2;
    *(undefined *)(param_4 + 0x1749) = 0;
    *(undefined4 *)(iVar4 + 0xcc) = uVar9;
    *(undefined *)(iVar4 + 0xd4) = 0;
    iVar4 = DAT_0035d768;
    uVar9 = DAT_0035d760;
    if (param_5_00 == 2) {
      *(undefined4 *)(param_4 + 0x6c) = DAT_0035d760;
      *(undefined4 *)(param_4 + 0x221c) = uVar9;
      *(undefined4 *)(param_4 + 100) = DAT_0035d764;
      *(undefined2 *)(param_4 + 0x2238) = 4;
      FUN_00360190(DAT_0035d76c,uVar2,uVar2,uVar2,param_4 + 0x254,param_3,
                   *(undefined4 *)(iVar4 + (uint)*(byte *)(param_4 + 0x1b3) * 4 + 0x48),2);
      if (*(char *)(param_4 + 2) == '\x02') {
        FUN_0036f59c(param_4,*(ushort *)(*(int *)(param_4 + 0x170c) + 0xf4) + 0x10004f0);
      }
      else {
        FUN_0036aeb4(param_4 + 0x28,DAT_0035d770);
      }
    }
    else {
      *(undefined4 *)(param_4 + 0x6c) = param_1;
      *(undefined4 *)(param_4 + 0x221c) = param_1;
      *(undefined4 *)(param_4 + 100) = param_2;
      if (iVar5 + 0x4000U < 0x8001) {
        iVar6 = 0xe0;
      }
      else {
        iVar6 = 0xa5;
      }
      if (*(char *)(param_4 + 2) == '\x02') {
        FUN_0036f59c(param_4,DAT_0035d774 + (uint)*(ushort *)(*(int *)(param_4 + 0x170c) + 0xf4));
      }
      else if (*(char *)(param_4 + 0xb7) == '\0') {
        FUN_0036aeb4(param_4 + 0x28,DAT_0035d774 + 0x15);
      }
      else {
        FUN_0036aeb4(param_4 + 0x28);
      }
    }
    *(ushort *)(param_4 + 0x90) = *(ushort *)(param_4 + 0x90) & 0xfffe;
    *(undefined *)(param_4 + 0x227f) = 0;
  }
  else {
    FUN_0036055c(param_3,param_4,DAT_0035d750,0);
    iVar6 = 0x35;
    *(undefined4 *)(param_4 + 0x221c) = DAT_0035d754;
    *(undefined4 *)(param_4 + 100) = uVar2;
    cVar1 = *(char *)(param_4 + 2);
joined_r0x0035d810:
    if (cVar1 == '\x02') {
      FUN_0036f59c(param_4,*(ushort *)(*(int *)(param_4 + 0x170c) + 0xf4) + 0x10004f0);
    }
    else {
      FUN_0036aeb4(param_4 + 0x28,DAT_0035d770);
    }
  }
  param_6 = *(short *)(param_4 + 0xbe) + param_6;
  *(short *)(param_4 + 0xbe) = param_6;
  *(short *)(param_4 + 0x2220) = param_6;
  *(short *)(param_4 + 0x36) = param_6;
  if (0x8000 < iVar5 + 0x4000U) {
    *(short *)(param_4 + 0xbe) = param_6 + -0x8000;
  }
LAB_0035d86c:
  FUN_0036b0fc(param_3,param_4);
  FUN_0036b02c(param_3,param_4);
  *(uint *)(param_4 + 0x1710) = *(uint *)(param_4 + 0x1710) | 0x4000000;
  if (iVar6 == -1) {
    return;
  }
  FUN_00358dfc(uVar3,param_4 + 0x254,param_3,iVar6);
  return;
}

