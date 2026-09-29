// OoT3D decomp @ 004946b4  name=FUN_004946b4  size=1288

void FUN_004946b4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  uint uVar7;
  undefined4 extraout_r1_01;
  bool bVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int local_20;

  local_20 = param_4;
  FUN_00306a34(param_1 + 0x16c);
  bVar1 = *(byte *)(param_1 + 8);
  FUN_003069cc(param_1 + 0x16c);
  uVar4 = extraout_r1;
  do {
    if (bVar1 < 2) {
      return;
    }
    switch(bVar1) {
    case 3:
      FUN_00498f70(*(undefined4 *)(param_1 + 0x94));
      FUN_002c1438(*(undefined4 *)(param_1 + 0x140));
      *(undefined4 *)(param_1 + 0x140) = 0;
      FUN_002c12d4(param_1 + 0xc0);
      *(undefined4 *)(param_1 + 0x130) = 0;
      *(undefined4 *)(param_1 + 0x134) = 0;
      *(undefined4 *)(param_1 + 0x138) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      uVar6 = 0;
      if ((*(uint *)(param_1 + 0x9c) & 0xfffffffe) != 0) {
        FUN_0030d614(*(uint *)(param_1 + 0x9c) & 0xfffffffe);
        *(undefined4 *)(param_1 + 0x9c) = 0;
        uVar6 = extraout_r1_00;
      }
      bVar8 = *(int *)(param_1 + 0xb4) != 0;
      if (bVar8) {
        uVar6 = (uint)*(byte *)(param_1 + 0xbc);
      }
      if (bVar8 && uVar6 != 0) {
        FUN_0034fc68();
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined1 *)(param_1 + 0xbc) = 0;
      FUN_00306a34(param_1 + 0x16c);
      *(undefined1 *)(param_1 + 8) = 2;
      FUN_003069cc(param_1 + 0x16c);
      FUN_00306a34(param_1 + 0x16c);
      *(undefined1 *)(param_1 + 0xc) = 0;
      FUN_003069cc(param_1 + 0x16c);
      *(undefined2 *)(param_1 + 0xe) = 0;
      break;
    case 4:
      if (*(char *)(param_1 + 0xb) == '\0') {
        *(undefined4 *)(param_1 + 0xa8) = 0;
        *(undefined4 *)(param_1 + 0xac) = 0;
        *(undefined4 *)(param_1 + 0xa0) = 0;
        *(undefined4 *)(param_1 + 0xa4) = 0;
        iVar5 = FUN_0030d580(param_1 + 0x9c,param_1 + 0xe,1);
        if (-1 < iVar5) {
          FUN_00497378(param_1 + 0xc0,param_1 + 0x98,param_1,param_1 + 4);
          uVar4 = FUN_004975a4(param_1 + 0xc0);
          cVar3 = FUN_002c10b4(param_1 + 0x140,uVar4,param_1 + 0xc0);
          if (cVar3 == '\0' || cVar3 == '\x10') goto LAB_004948d4;
          FUN_002c12d4(param_1 + 0xc0);
          if ((*(uint *)(param_1 + 0x9c) & 0xfffffffe) != 0) {
            FUN_0030d614(*(uint *)(param_1 + 0x9c) & 0xfffffffe);
            *(undefined4 *)(param_1 + 0x9c) = 0;
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0xb4);
        *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0xb8);
        *(undefined4 *)(param_1 + 0x138) = 0;
        *(undefined4 *)(param_1 + 0x13c) = 0x800;
        uVar4 = FUN_004975b0(param_1 + 0x130);
        uVar9 = FUN_002c10b4(param_1 + 0x140,uVar4,param_1 + 0x130);
        uVar6 = (uint)(uVar9 >> 0x20);
        if ((uVar9 & 0xff) == 0 || ((uint)uVar9 & 0xff) == 0x10) {
LAB_004948d4:
          FUN_00306a34(param_1 + 0x16c);
          *(undefined1 *)(param_1 + 8) = 5;
          FUN_003069cc(param_1 + 0x16c);
          break;
        }
        *(undefined4 *)(param_1 + 0x130) = 0;
        *(undefined4 *)(param_1 + 0x134) = 0;
        *(undefined4 *)(param_1 + 0x138) = 0;
        *(undefined4 *)(param_1 + 0x13c) = 0;
        bVar8 = *(int *)(param_1 + 0xb4) != 0;
        if (bVar8) {
          uVar6 = (uint)*(byte *)(param_1 + 0xbc);
        }
        if (bVar8 && uVar6 != 0) {
          FUN_0034fc68();
        }
        *(undefined4 *)(param_1 + 0xb4) = 0;
        *(undefined4 *)(param_1 + 0xb8) = 0;
        *(undefined1 *)(param_1 + 0xbc) = 0;
      }
LAB_0049492c:
      FUN_00306a34(param_1 + 0x16c);
      *(undefined1 *)(param_1 + 8) = 0;
      FUN_003069cc(param_1 + 0x16c);
      break;
    case 5:
      FUN_00498138(param_1);
      break;
    case 7:
      cVar3 = FUN_00498fc0(*(undefined4 *)(param_1 + 0x140),uVar4,0,0);
      if (cVar3 != '\0') goto LAB_0049492c;
      FUN_00306a34(param_1 + 0x16c);
      *(undefined4 *)(param_1 + 0x160) = 0;
      FUN_003069cc(param_1 + 0x16c);
      do {
        cVar3 = FUN_002c1070(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x154));
      } while (cVar3 == '\x14');
      do {
        iVar5 = FUN_002c0ffc(*(undefined4 *)(param_1 + 0x94));
      } while (iVar5 != 0);
      FUN_00306a34(param_1 + 0x16c);
      *(undefined1 *)(param_1 + 8) = 8;
      FUN_003069cc(param_1 + 0x16c);
      break;
    case 8:
      cVar3 = FUN_002c0ef8(*(undefined4 *)(param_1 + 0x140));
      if (cVar3 == '\0') {
        FUN_002c0ed4(*(undefined4 *)(param_1 + 0x140),&local_20);
        if (local_20 != 0) {
          FUN_00306a34(param_1 + 0x16c);
          *(undefined1 *)(param_1 + 8) = 9;
          FUN_003069cc(param_1 + 0x16c);
        }
      }
      else {
        if (cVar3 != '\x10' && cVar3 != '\x03') {
          FUN_00306a34(param_1 + 0x16c);
          *(undefined1 *)(param_1 + 8) = 0;
          FUN_003069cc(param_1 + 0x16c);
        }
        FUN_00306a34(param_1 + 0x16c);
        FUN_003069cc(param_1 + 0x16c);
      }
      break;
    case 9:
      iVar5 = FUN_002c0d6c(param_1);
      uVar10 = FUN_002c0d60(*(undefined4 *)(param_1 + 0x94));
      uVar7 = (uint)((ulonglong)uVar10 >> 0x20);
      uVar6 = (int)uVar10 - iVar5;
      if ((int)uVar6 < 1) {
        software_interrupt(0x28);
        lVar2 = (ulonglong)uVar6 * 3 +
                CONCAT44(((int)uVar7 >> 0x1f) * DAT_00494bec +
                         (int)((ulonglong)DAT_00494bec * (ulonglong)uVar7 >> 0x20),
                         (int)((ulonglong)DAT_00494bec * (ulonglong)uVar7)) +
                CONCAT44(uVar7 * 3,(int)((ulonglong)DAT_00494bec * (ulonglong)uVar6 >> 0x20));
        uVar10 = FUN_00332754((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1000,0);
        FUN_00306a34(param_1 + 0x16c);
        *(undefined8 *)(param_1 + 0x158) = uVar10;
        FUN_003069cc(param_1 + 0x16c);
        FUN_00306a34(param_1 + 0x16c);
        *(undefined1 *)(param_1 + 8) = 0xb;
        FUN_003069cc(param_1 + 0x16c);
      }
      break;
    case 10:
      FUN_00306a34(param_1 + 0x16c);
      *(undefined1 *)(param_1 + 8) = 6;
      FUN_003069cc(param_1 + 0x16c);
      FUN_00306a34(param_1 + 0x16c);
      *(undefined1 *)(param_1 + 0xc) = 0;
      FUN_003069cc(param_1 + 0x16c);
      FUN_00306a34(param_1 + 0x16c);
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x15c) = 0;
      FUN_003069cc(param_1 + 0x16c);
      break;
    case 0xb:
      uVar6 = FUN_002c0d6c(param_1);
      FUN_00306a34(param_1 + 0x16c);
      cVar3 = *(char *)(param_1 + 0xc);
      FUN_003069cc(param_1 + 0x16c);
      if (((cVar3 != '\0') && (uVar6 < 2)) &&
         (FUN_002c0d20(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x154),&local_20),
         local_20 == 0)) {
        FUN_00306a34(param_1 + 0x16c);
        *(undefined1 *)(param_1 + 8) = 0xc;
        FUN_003069cc(param_1 + 0x16c);
      }
    }
    FUN_00306a34(param_1 + 0x16c);
    bVar1 = *(byte *)(param_1 + 8);
    FUN_003069cc(param_1 + 0x16c);
    uVar4 = extraout_r1_01;
  } while( true );
}
