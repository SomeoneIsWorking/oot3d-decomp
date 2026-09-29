// OoT3D decomp @ 00322f14  name=FUN_00322f14  size=664

void FUN_00322f14(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  uint unaff_r5;
  int iVar6;
  uint in_fpscr;
  undefined4 uVar7;

  iVar6 = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  iVar3 = FUN_0037571c(param_2);
  uVar2 = DAT_003231b0;
  if (iVar3 == 0) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = *(ushort **)(&DAT_000022dc + param_2);
  }
  uVar5 = 0;
  if (puVar4 != (ushort *)0x0) {
    unaff_r5 = (uint)*puVar4;
    uVar5 = *(uint *)(param_1 + 0x5f8);
  }
  if (puVar4 != (ushort *)0x0 && unaff_r5 != uVar5) {
    if (unaff_r5 == 0x11) {
      FUN_003411f8(DAT_003231ac,param_1,0x12,2,0);
      *(undefined4 *)(param_1 + 0x554) = 0x1c;
      *(undefined4 *)(param_1 + 0x558) = 1;
      *(undefined4 *)(param_1 + 0x634) = uVar2;
      *(undefined1 *)(param_1 + 0xd0) = 0xff;
    }
    else if ((int)unaff_r5 < 0x12) {
      if (unaff_r5 == 1) {
        *(undefined4 *)(param_1 + 0x554) = 0x19;
        *(undefined4 *)(param_1 + 0x558) = 0;
        *(undefined1 *)(param_1 + 0xd0) = 0;
      }
      else if (unaff_r5 == 2) {
        FUN_003411f8(DAT_003231ac,param_1,0x14,0);
        iVar3 = FUN_0037571c(param_2);
        if (iVar3 != 0) {
          iVar6 = *(int *)(&DAT_000022dc + param_2);
        }
        if (iVar6 != 0) {
          uVar7 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(param_1 + 0x28) = uVar7;
          uVar7 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(param_1 + 0x2c) = uVar7;
          uVar7 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(param_1 + 0x30) = uVar7;
          uVar1 = *(undefined2 *)(iVar6 + 8);
          *(undefined2 *)(param_1 + 0xbe) = uVar1;
          *(undefined2 *)(param_1 + 0x36) = uVar1;
        }
        *(undefined4 *)(param_1 + 0x554) = 0x1a;
        *(undefined4 *)(param_1 + 0x558) = 1;
        *(undefined4 *)(param_1 + 0x634) = uVar2;
        *(undefined1 *)(param_1 + 0xd0) = 0xff;
      }
      else if (unaff_r5 == 4) {
        FUN_003411f8(DAT_003231ac,param_1,7,2,0);
        *(undefined4 *)(param_1 + 0x554) = 0x1e;
        *(undefined4 *)(param_1 + 0x558) = 1;
        *(undefined4 *)(param_1 + 0x634) = uVar2;
        *(undefined1 *)(param_1 + 0xd0) = 0xff;
      }
      else if (unaff_r5 == 0x10) {
        FUN_003411f8(DAT_003231ac,param_1,0x10,2,0);
        *(undefined4 *)(param_1 + 0x554) = 0x1b;
        *(undefined4 *)(param_1 + 0x558) = 1;
        *(undefined4 *)(param_1 + 0x634) = uVar2;
        *(undefined1 *)(param_1 + 0xd0) = 0xff;
      }
    }
    else if (unaff_r5 == 0x12) {
      FUN_003411f8(DAT_003231ac,param_1,0xe,2,0);
      *(undefined4 *)(param_1 + 0x554) = 0x1d;
      *(undefined4 *)(param_1 + 0x558) = 1;
      *(undefined1 *)(param_1 + 0xd0) = 0xff;
    }
    else if (unaff_r5 == 0x14) {
      FUN_003411f8(DAT_003231ac,param_1,0xd,2,0);
      *(undefined4 *)(param_1 + 0x554) = 0x20;
      *(undefined4 *)(param_1 + 0x558) = 1;
      *(undefined4 *)(param_1 + 0x634) = uVar2;
      *(undefined1 *)(param_1 + 0xd0) = 0xff;
    }
    else {
      iVar3 = param_1 + 0x400;
      if (unaff_r5 == 0x15) {
        uVar5 = *(uint *)(param_1 + 0x608);
        iVar3 = param_1;
      }
      if (unaff_r5 == 0x15 && uVar5 == 0) {
        iVar6 = *(int *)(DAT_003231b4 + param_2);
        z_actor_003738d0(*(undefined4 *)(iVar6 + 0x28),*(undefined4 *)(iVar6 + 0x2c),
                         *(undefined4 *)(iVar6 + 0x30),param_2 + 0x208c,param_2,0x5d,0,0,0,7,1);
        *(undefined4 *)(iVar3 + 0x608) = 1;
      }
    }
    *(uint *)(param_1 + 0x5f8) = unaff_r5;
  }
  return;
}
