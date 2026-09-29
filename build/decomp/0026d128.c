// OoT3D decomp @ 0026d128  name=FUN_0026d128  size=1084

void FUN_0026d128(int param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  undefined4 auStack_3c [4];

  FUN_003510b0(param_1,uRam0026d46c);
  uVar6 = uRam0026d478;
  FUN_00372d4c(uRam0026d478,uRam0026d470,param_1 + 0xbc,uRam0026d474);
  FUN_00372f38(param_1,param_2,param_1 + 0x978,6,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x5d0,0x12);
  *(undefined1 *)(param_1 + 0x9ea) = 0xff;
  *(undefined1 *)(param_1 + 0x9eb) = 0xff;
  *(undefined1 *)(param_1 + 0x9ec) = 0x99;
  *(undefined1 *)(param_1 + 0x9ed) = 0xff;
  uVar3 = FUN_0034faa8(param_2,param_2 + 0xa70);
  *(undefined4 *)(param_1 + 0xa54) = uVar3;
  FUN_0036f410(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10),param_1 + 0xa58,0,0,0,0,0);
  FUN_00353dd0(param_2,param_1 + 0xa70);
  FUN_00353d24(param_2,param_1 + 0xa70,param_1,uRam0026d47c);
  FUN_00350d20(param_1 + 0xa0,iRam0026d480 + 0x70);
  uVar3 = uRam0026d484;
  bVar1 = (byte)(((uint)*(ushort *)(param_1 + 0x1c) << 0x16) >> 0x18);
  *(byte *)(param_1 + 0x9e0) = bVar1 >> 6;
  *(byte *)(param_1 + 0x123) = (bVar1 >> 6) + 0x50;
  iVar8 = param_2 + 0x208c;
  *(byte *)(param_1 + 0x9e1) = (byte)(((uint)*(ushort *)(param_1 + 0x1c) << 0x14) >> 0x1e);
  *(undefined4 *)(param_1 + 0xa50) = uVar3;
  *(undefined1 *)(param_1 + 0x9e2) = 0x30;
  *(undefined1 *)(param_1 + 0x9e3) = 0x1e;
  *(undefined1 *)(param_1 + 0x9e4) = 1;
  *(undefined1 *)(param_1 + 0x9e5) = 0x20;
  uVar4 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar4 & 0xfffffffe;
  iVar7 = iRam0026d48c;
  if ((*(ushort *)(param_1 + 0x1c) & 0x1000) == 0) {
    if (*(char *)(param_1 + 0x9e0) == '\0') {
      if (*(char *)(param_1 + 0x9e1) != '\0') {
        *(uint *)(param_1 + 4) = uVar4 & 0xffffbdfe;
        *(undefined1 *)(param_1 + 0xa9c) = 4;
        *(uint *)(param_1 + 0xa90) = *(uint *)(param_1 + 0xa90) | 1;
        *(undefined1 *)(param_1 + 0xa82) = 0;
        FUN_00370170(param_1,0);
        goto LAB_0026d538;
      }
      *(undefined1 *)(param_1 + 0xa82) = 9;
      iVar7 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                               *(undefined4 *)(param_1 + 0x30),iVar8,param_2,0x91,0,0,0,0x400,1);
      iVar5 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                               *(undefined4 *)(param_1 + 0x30),iVar8,param_2,0x91,0,0,0,0x800,1);
      iVar8 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                               *(undefined4 *)(param_1 + 0x30),iVar8,param_2,0x91,0,0,0,0xc00,1);
      if (iVar7 == 0) {
LAB_0026d3e8:
        if (iVar5 != 0) {
          FUN_00374428(iVar5);
        }
        if (iVar8 != 0) {
          FUN_00374428(iVar8);
        }
        FUN_00374428(param_1);
      }
      else {
        if (iVar5 == 0 || iVar8 == 0) {
          FUN_00374428(iVar7);
          goto LAB_0026d3e8;
        }
        *(int *)(iVar8 + 0x124) = param_1;
        *(int *)(iVar5 + 0x124) = param_1;
        *(int *)(iVar7 + 0x124) = param_1;
        uVar3 = FUN_0036ae14(param_1 + 0x1a4,6);
        uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uRam0026d494,uVar6,uVar3,uVar6,param_1 + 0x1a4,6,0);
        *(undefined1 *)(param_1 + 0x9e4) = 0;
        *(undefined1 *)(param_1 + 0x9e5) = 0xa0;
        *(undefined4 *)(param_1 + 0x9dc) = uRam0026d498;
      }
      *(undefined1 *)(param_1 + 0x19b) = 4;
      goto LAB_0026d538;
    }
    if (*(char *)(param_1 + 0x9e0) == '\x03') {
      FUN_00373d40();
      FUN_00375bcc(param_1,uRam0026d594);
    }
    else {
      uVar3 = FUN_0036ae14(param_1 + 0x1a4,1);
      uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uRam0026d598,uVar6,uVar3,uVar6,param_1 + 0x1a4,1,3);
    }
    uVar6 = uRam0026d59c;
    *(undefined1 *)(param_1 + 0x9ed) = 0;
    *(undefined1 *)(param_1 + 0x9e5) = 0x20;
  }
  else {
    *(undefined4 *)(iRam0026d488 + param_2) = 0;
    *(undefined1 *)(param_1 + 0x9ed) = 0;
    *(undefined1 *)(param_1 + 0x9e5) = 0x80;
    *(undefined2 *)(iVar7 + param_1) = 0x4b;
    *(undefined4 *)(param_1 + 0x9f0) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x9f4) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x9f8) = *(undefined4 *)(param_1 + 0x10);
    FUN_00375d3c(param_2,iVar8,param_1,6);
    uVar6 = uRam0026d490;
  }
  *(undefined4 *)(param_1 + 0x9dc) = uVar6;
LAB_0026d538:
  puVar2 = puRam0026d5a0;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0x3f;
  auStack_3c[0] = *puVar2;
  auStack_3c[1] = puVar2[1];
  auStack_3c[2] = puVar2[2];
  auStack_3c[3] = puVar2[3];
  iVar7 = 0;
  do {
    TorchAnimationModel_0034f94c
              (param_1 + iVar7 * 0xc + 0x97c,param_2,param_1,auStack_3c[*(byte *)(param_1 + 0x9e0)])
    ;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  return;
}
