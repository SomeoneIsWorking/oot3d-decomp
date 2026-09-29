// OoT3D decomp @ 00355b40  name=FUN_00355b40  size=800

void FUN_00355b40(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  iVar2 = DAT_00355e64;
  uVar1 = DAT_00355e60;
  iVar8 = 0;
  iVar9 = 0;
  iVar10 = *(int *)(param_2 + 0x20ac);
  *(undefined4 *)(param_1 + 0x3d4) = DAT_00355e60;
  *(undefined2 *)(param_1 + 1000) = 0;
  *(undefined1 *)(param_1 + 0x284d) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  if (*(char *)(iVar2 + param_1) != '\0') {
    *(uint *)(iVar10 + 0x1714) = *(uint *)(iVar10 + 0x1714) & 0xdfffffff;
    *(undefined1 *)(param_1 + 0x284c) = 0;
  }
  *(undefined2 *)(param_1 + 0x264) = 0x6e;
  iVar5 = DAT_00355e74;
  uVar4 = DAT_00355e6c;
  uVar3 = DAT_00355e68;
  *(undefined4 *)(param_1 + 0x26c) = DAT_00355e68;
  *(undefined4 *)(param_1 + 0x290) = uVar4;
  iVar2 = DAT_00355e70;
  if (((ushort)((*(ushort *)(DAT_00355e70 + 0x8a) & *(ushort *)(iVar5 + 2)) >>
               *(sbyte *)(DAT_00355e78 + 1)) != 3) && (iVar9 = FUN_0035d190(param_2,1), iVar9 != 0))
  {
    *(char *)(param_1 + 0x3e2) = (char)iVar9;
    *(undefined1 *)(param_1 + 0x3e5) = 1;
  }
  if (((ushort)((*(ushort *)(iVar2 + 0x8a) & *(ushort *)(DAT_00355e74 + 4)) >>
               *(sbyte *)(DAT_00355e78 + 2)) != 1) && (iVar8 = FUN_0035d190(param_2,2), iVar8 != 0))
  {
    *(char *)(param_1 + 0x3e3) = (char)iVar8;
    *(undefined1 *)(param_1 + 0x3e5) = 1;
  }
  bVar7 = iVar9 == 1 || iVar9 == 2;
  if (iVar8 == 2 || iVar8 == 3) {
    bVar7 = bVar7 | 2;
  }
  *(undefined4 *)(iVar10 + 0x124) = 0;
  if (bVar7 == 1) {
    FUN_00367c7c(param_2,DAT_00355e94,0);
  }
  else if (bVar7 == 2) {
    FUN_00367c7c(param_2,DAT_00355e98,0);
  }
  else if (bVar7 == 3) {
    FUN_00367c7c(param_2,DAT_00355e7c,0);
  }
  FUN_00368fc0(DAT_00355e84,DAT_00355e80,param_2,param_1,(int)*(short *)(param_1 + 0xbe),8);
  uVar4 = DAT_00355e90;
  if (*(short *)(DAT_00355e88 + param_1) != 0) {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      *(undefined1 *)(param_1 + 0x3e1) = 1;
      *(undefined2 *)(param_1 + 600) = 0;
      *(undefined4 *)(param_1 + 0x3d8) = uVar1;
      *(undefined4 *)(param_1 + 0x3d4) = uVar1;
      *(undefined4 *)(param_1 + 0x298) = uVar1;
      *(undefined4 *)(param_1 + 0x2c8) = uVar1;
      *(undefined4 *)(param_1 + 0x2c0) = uVar1;
      *(undefined4 *)(param_1 + 0x2d8) = uVar1;
      *(undefined4 *)(param_1 + 0x308) = uVar1;
      *(undefined4 *)(param_1 + 0x300) = uVar1;
      *(undefined4 *)(param_1 + 0x318) = uVar1;
      *(undefined4 *)(param_1 + 0x348) = uVar1;
      *(undefined4 *)(param_1 + 0x340) = uVar1;
      *(undefined4 *)(param_1 + 0x358) = uVar1;
      *(undefined4 *)(param_1 + 0x388) = uVar1;
      *(undefined4 *)(param_1 + 0x380) = uVar1;
      uVar3 = DAT_00355ea8;
      *(undefined4 *)(param_1 + 0x398) = uVar1;
      *(undefined4 *)(param_1 + 0x3c8) = uVar1;
      *(undefined4 *)(param_1 + 0x3c0) = uVar1;
      *(undefined4 *)(param_1 + 0x1a4) = uVar3;
      FUN_00375bcc(param_1,DAT_00355eac);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    *(undefined1 *)(param_1 + 0x3e0) = 0;
    *(undefined4 *)(param_1 + 0x3d4) = uVar1;
    *(undefined2 *)(param_1 + 0x25a) = 0x1e;
    *(undefined4 *)(param_1 + 0x26c) = uVar3;
    *(undefined4 *)(param_1 + 0x288) = uVar1;
    *(undefined4 *)(param_1 + 0x290) = uVar1;
    *(undefined4 *)(param_1 + 0x298) = uVar1;
    *(undefined4 *)(param_1 + 0x2c8) = uVar1;
    *(undefined4 *)(param_1 + 0x2c0) = uVar1;
    uVar4 = DAT_00355ea0;
    uVar3 = DAT_00355e9c;
    *(undefined4 *)(param_1 + 0x2b0) = DAT_00355e9c;
    uVar6 = DAT_00355ea4;
    *(undefined4 *)(param_1 + 0x2a8) = uVar3;
    *(undefined4 *)(param_1 + 0x2d8) = uVar1;
    *(undefined4 *)(param_1 + 0x308) = uVar1;
    *(undefined4 *)(param_1 + 0x300) = uVar1;
    *(undefined4 *)(param_1 + 0x2f0) = uVar3;
    *(undefined4 *)(param_1 + 0x2e8) = uVar3;
    *(undefined4 *)(param_1 + 0x318) = uVar1;
    *(undefined4 *)(param_1 + 0x348) = uVar1;
    *(undefined4 *)(param_1 + 0x340) = uVar1;
    *(undefined4 *)(param_1 + 0x330) = uVar3;
    *(undefined4 *)(param_1 + 0x328) = uVar3;
    *(undefined4 *)(param_1 + 0x358) = uVar1;
    *(undefined4 *)(param_1 + 0x388) = uVar1;
    *(undefined4 *)(param_1 + 0x380) = uVar1;
    *(undefined4 *)(param_1 + 0x370) = uVar3;
    *(undefined4 *)(param_1 + 0x368) = uVar3;
    *(undefined4 *)(param_1 + 0x398) = uVar1;
    *(undefined4 *)(param_1 + 0x3c8) = uVar1;
    *(undefined4 *)(param_1 + 0x3c0) = uVar1;
    *(undefined4 *)(param_1 + 0x3b0) = uVar3;
    *(undefined4 *)(param_1 + 0x3a8) = uVar3;
    *(undefined4 *)(param_1 + 0x1a4) = uVar4;
    FUN_00375bcc(param_1,uVar6);
    return;
  }
  *(undefined4 *)(param_1 + 0x1a4) = DAT_00355e8c;
  FUN_00375bcc(param_1,uVar4);
  return;
}
