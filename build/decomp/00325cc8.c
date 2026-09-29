// OoT3D decomp @ 00325cc8  name=FUN_00325cc8  size=668

void FUN_00325cc8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined2 *puVar5;

  uVar2 = DAT_00325f98;
  uVar1 = DAT_00325f94;
  uVar4 = (uint)*(byte *)(param_1 + 0x10e8);
  if (uVar4 != *(uint *)(param_1 + 0x1004)) {
    puVar5 = (undefined2 *)(param_1 + 0xf5c);
    switch(uVar4) {
    case 0:
      FUN_00341188(param_1,0x30,0);
      *(undefined4 *)(param_1 + 0xf60) = 1;
      break;
    case 1:
      *(undefined2 *)(DAT_00325f90 + param_1) = 3;
      FUN_0037547c(DAT_00325f9c,param_1 + 0x28,4,uVar2,uVar2,uVar1);
      break;
    case 2:
      if (*(int *)(param_1 + 0x128) != 0) {
        FUN_00374428();
      }
      FUN_00374428(param_1);
      break;
    case 3:
      FUN_00341188(param_1,0x31,2,0);
      *(undefined4 *)(param_1 + 0xf60) = 2;
      *puVar5 = 0;
      break;
    case 4:
      FUN_00341188(param_1,0x31,2,0);
      *(undefined4 *)(param_1 + 0xf60) = 3;
      break;
    case 5:
      FUN_00341188(DAT_00325f8c,param_1,0x36,2,0);
      FUN_0037547c(DAT_00325f9c,param_1 + 0x28,4,DAT_00325f98,DAT_00325f98,DAT_00325f94);
      *puVar5 = 2;
      *(undefined4 *)(param_1 + 0xf60) = 4;
      FUN_0036ec40(0,DAT_00325fa0);
      break;
    case 6:
      FUN_00341188(DAT_00325f8c,param_1,0x35,2,0);
      *puVar5 = 0;
      *(undefined4 *)(param_1 + 0xf60) = 5;
      break;
    case 7:
      FUN_00375c10(DAT_00325f88,param_2,0x36);
      FUN_00371e6c(0xb4);
      z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x1cc,0,0,0,0,1);
      z_actor_003738d0(DAT_00325fac,DAT_00325fa8,DAT_00325fa4,param_2 + 0x208c,param_2,0x3b,0,0,0,
                       0x12,1);
      *(ushort *)(DAT_00325fb0 + 4) = *(ushort *)(DAT_00325fb0 + 4) & 0xff7f;
      if (*(int *)(DAT_00325fb4 + param_2) != 0) {
        pbVar3 = (byte *)(*(int *)(DAT_00325fb4 + param_2) +
                         ((*(ushort *)(param_1 + 0x1c) & 0xf0) >> 1));
        *(byte **)(param_1 + 0x1020) = pbVar3;
        *(uint *)(param_1 + 0x1024) = (uint)*pbVar3;
      }
      *(undefined2 *)(DAT_00325fb8 + 0xb2) = 0x140;
      *(undefined1 *)(param_2 + 0x7f40) = 0xd3;
      FUN_00353998(param_2);
      *(undefined1 *)(param_2 + 0x7f40) = 0xd3;
      *(undefined4 *)(param_1 + 0xf60) = 0x1b;
      *(undefined4 *)(param_1 + 0xf64) = 1;
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x103c) = 1;
    }
    *(uint *)(param_1 + 0x1004) = uVar4;
  }
  return;
}
