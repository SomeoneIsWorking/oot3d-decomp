// OoT3D decomp @ 001e49a4  name=FUN_001e49a4  size=1572

/* WARNING: Removing unreachable block (ram,0x001e5018) */

undefined4 FUN_001e49a4(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;

  switch(*(undefined1 *)(param_1 + 0x478)) {
  case 0:
    iVar3 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001e4d10,param_1 + 0x1a4);
    if (iVar3 == 0) {
      return 0;
    }
    FUN_003717ac(param_1 + 0x1a4,DAT_001e4d14,4);
    goto LAB_001e4a38;
  case 1:
    iVar3 = FUN_003769d8(param_2 + 0x28a0);
    if (iVar3 != 5) {
      return 0;
    }
    iVar3 = FUN_00346964(param_2);
    if (iVar3 == 0) {
      return 0;
    }
    FUN_003436f0(param_2,6);
    FUN_003717ac(param_1 + 0x1a4,DAT_001e4d14,1);
    *(undefined2 *)(param_1 + 0x480) = 0xb;
    *(undefined1 *)(param_1 + 0x47d) = 5;
    *(undefined1 *)(param_1 + 0x47e) = 0;
    FUN_00370778(param_2);
    FUN_00367c7c(param_2,DAT_001e4d18,0);
LAB_001e4a38:
    *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
    return 0;
  case 2:
    iVar3 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001e4d10,param_1 + 0x1a4);
    if (iVar3 != 0) {
      FUN_003717ac(param_1 + 0x1a4,DAT_001e4d14,2);
      *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
    }
  case 3:
    iVar3 = FUN_003769d8(param_2 + 0x28a0);
    if (iVar3 != 5) {
      return 0;
    }
    iVar3 = FUN_00346964(param_2);
    if (iVar3 == 0) {
      return 0;
    }
    FUN_003717ac(param_1 + 0x1a4,DAT_001e4d14,0x10);
    *(undefined2 *)(param_1 + 0x480) = 0;
    *(undefined1 *)(param_1 + 0x47d) = 0;
    FUN_00370778(param_2);
    cVar1 = '\x04';
    break;
  case 4:
    iVar3 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001e4d10,param_1 + 0x1a4);
    if (iVar3 == 0) {
      return 0;
    }
    FUN_003717ac(param_1 + 0x1a4,DAT_001e4d14,0x11);
    FUN_00367c7c(param_2,DAT_001e4d1c,0);
    cVar1 = *(char *)(param_1 + 0x478) + '\x01';
    break;
  case 5:
    iVar3 = FUN_003769d8(param_2 + 0x28a0);
    if (iVar3 != 5) {
      return 0;
    }
    iVar3 = FUN_00346964(param_2);
    if (iVar3 == 0) {
      return 0;
    }
    FUN_00347aec(param_2,param_1,3);
    FUN_003717ac(param_1 + 0x1a4,DAT_001e4d14,0);
    FUN_00370778(param_2);
    *(undefined2 *)(param_1 + 0x484) = 0;
    cVar1 = '\x06';
    break;
  case 6:
    sVar2 = *(short *)(param_1 + 0x484) + 1;
    *(short *)(param_1 + 0x484) = sVar2;
    if (sVar2 < 0xf) {
      return 0;
    }
    FUN_00367c7c(param_2,DAT_001e4d20,0);
    cVar1 = *(char *)(param_1 + 0x478) + '\x01';
    break;
  case 7:
    iVar3 = FUN_003769d8(param_2 + 0x28a0);
    if (iVar3 != 5) {
      return 0;
    }
    iVar3 = FUN_00346964(param_2);
    if (iVar3 == 0) {
      return 0;
    }
    FUN_003717ac(param_1 + 0x1a4,DAT_001e4d14,6);
    *(undefined1 *)(param_1 + 0x47e) = 1;
    FUN_00367c7c(param_2,DAT_001e4d24,0);
    cVar1 = *(char *)(param_1 + 0x478) + '\x01';
    break;
  case 8:
    iVar3 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001e4d10,param_1 + 0x1a4);
    if (iVar3 != 0) {
      FUN_003717ac(param_1 + 0x1a4,DAT_001e4d14,0x19);
      *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
    }
  case 9:
    iVar3 = FUN_003769d8(param_2 + 0x28a0);
    if (iVar3 != 5) {
      return 0;
    }
    iVar3 = FUN_00346964(param_2);
    if (iVar3 == 0) {
      return 0;
    }
    goto LAB_001e4f34;
  case 10:
    iVar3 = FUN_003769d8(param_2 + 0x28a0);
    if (iVar3 != 4) {
      return 0;
    }
    iVar3 = FUN_00346964(param_2);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_00369f3c(param_2);
    if (iVar3 == 0) {
      FUN_00347aec(param_2,param_1,4);
      FUN_003717ac(param_1 + 0x1a4,DAT_001e4d14,0x21);
      *(undefined1 *)(param_1 + 0x47e) = 0;
      FUN_00370778(param_2);
      cVar1 = '\x0f';
      *(undefined2 *)(param_1 + 0x484) = 0;
    }
    else {
      FUN_003436f0(param_2,6);
      FUN_00370778(param_2);
      *(undefined4 *)(param_1 + 0x1e4) = DAT_001e5028;
      *(undefined2 *)(param_1 + 0x482) = 0x1e;
      cVar1 = *(char *)(param_1 + 0x478) + '\x01';
    }
    break;
  case 0xb:
    if ((*(short *)(param_1 + 0x482) != 0) &&
       (sVar2 = *(short *)(param_1 + 0x482) + -1, *(short *)(param_1 + 0x482) = sVar2, sVar2 != 0))
    {
      return 0;
    }
    FUN_003717ac(param_1 + 0x1a4,DAT_001e4d14,0xb);
    *(undefined2 *)(param_1 + 0x480) = 0xb;
    *(undefined1 *)(param_1 + 0x47d) = 3;
    *(undefined1 *)(param_1 + 0x47e) = 2;
    FUN_00367c7c(param_2,DAT_001e502c,0);
    cVar1 = *(char *)(param_1 + 0x478) + '\x01';
    break;
  case 0xc:
    if ((DAT_001e5030 <= *(int *)(param_1 + 0x1e0)) && (*(int *)(param_1 + 0x1e0) <= DAT_001e5034))
    {
      FUN_00375bcc(param_1,DAT_001e5038);
    }
    iVar3 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001e4d10,param_1 + 0x1a4);
    if (iVar3 != 0) {
      FUN_003717ac(param_1 + 0x1a4,DAT_001e4d14,0xc);
      *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
    }
  case 0xd:
    iVar3 = FUN_003769d8(param_2 + 0x28a0);
    if (iVar3 != 5) {
      return 0;
    }
    iVar3 = FUN_00346964(param_2);
    if (iVar3 == 0) {
      return 0;
    }
    FUN_003717ac(param_1 + 0x1a4,DAT_001e4d14,6);
    *(undefined2 *)(param_1 + 0x480) = 3;
    *(undefined1 *)(param_1 + 0x47d) = 0;
    *(undefined1 *)(param_1 + 0x47e) = 1;
    FUN_00370778(param_2);
    cVar1 = '\x0e';
    break;
  case 0xe:
    iVar3 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001e4d10,param_1 + 0x1a4);
    if (iVar3 == 0) {
      return 0;
    }
    FUN_003717ac(param_1 + 0x1a4,DAT_001e4d14,0x19);
LAB_001e4f34:
    FUN_00367c7c(param_2,DAT_001e503c,0);
    cVar1 = '\n';
    break;
  case 0xf:
    sVar2 = *(short *)(param_1 + 0x484) + 1;
    *(short *)(param_1 + 0x484) = sVar2;
    if (sVar2 < 0x1e) {
      return 0;
    }
    FUN_00367c7c(param_2,DAT_001e5040,0);
    cVar1 = *(char *)(param_1 + 0x478) + '\x01';
    break;
  case 0x10:
    iVar3 = FUN_003769d8(param_2 + 0x28a0);
    if ((iVar3 == 5) && (iVar3 = FUN_00346964(param_2), iVar3 != 0)) {
      FUN_00370778(param_2);
      *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
    }
  case 0x11:
    sVar2 = *(short *)(param_1 + 0x484) + 1;
    *(short *)(param_1 + 0x484) = sVar2;
    if (sVar2 == 0x82) {
      FUN_00370778(param_2);
      FUN_003716f0(param_2,0xa0,0x14,3);
      *(undefined2 *)(DAT_001e5044 + 0xa0) = 0xfff7;
    }
  default:
    goto switchD_001e49bc_default;
  }
  *(char *)(param_1 + 0x478) = cVar1;
switchD_001e49bc_default:
  return 0;
}
