// OoT3D decomp @ 00328664  name=FUN_00328664  size=1348

void FUN_00328664(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 uVar8;

  iVar2 = FUN_0037571c(param_2);
  puVar3 = (ushort *)0x0;
  if (iVar2 != 0) {
    puVar3 = *(ushort **)(&DAT_000022dc + param_2);
  }
  iVar6 = 0;
  if (iVar2 == 0) {
    puVar3 = (ushort *)0x0;
  }
  if (puVar3 == (ushort *)0x0) {
    return;
  }
  uVar5 = (uint)*puVar3;
  if (uVar5 == *(uint *)(param_1 + 0x5f8)) {
    return;
  }
  switch(uVar5) {
  case 1:
    *(undefined4 *)(param_1 + 0x554) = 1;
    *(undefined4 *)(param_1 + 0x558) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    break;
  case 2:
    iVar2 = FUN_0037571c(param_2);
    if (iVar2 != 0) {
      iVar6 = *(int *)(&DAT_000022dc + param_2);
    }
    uVar4 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    uVar4 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    uVar4 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x30) = uVar4;
    uVar1 = *(undefined2 *)(iVar6 + 8);
    *(undefined2 *)(param_1 + 0xbe) = uVar1;
    *(undefined2 *)(param_1 + 0x36) = uVar1;
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
    *(undefined4 *)(param_1 + 0x554) = 2;
    *(undefined4 *)(param_1 + 0x558) = 1;
    break;
  case 3:
    iVar2 = FUN_0037571c(param_2);
    if (iVar2 != 0) {
      iVar6 = *(int *)(&DAT_000022dc + param_2);
    }
    uVar8 = VectorSignedToFloat(*(int *)(iVar6 + 0x18) - *(int *)(iVar6 + 0xc),
                                (byte)(in_fpscr >> 0x15) & 3);
    uVar4 = VectorSignedToFloat(*(int *)(iVar6 + 0x20) - *(int *)(iVar6 + 0x14),
                                (byte)(in_fpscr >> 0x15) & 3);
    FUN_003411f8(DAT_00328adc,param_1,0,0);
    *(undefined4 *)(param_1 + 0x554) = 3;
    *(undefined4 *)(param_1 + 0x558) = 1;
    *(undefined4 *)(param_1 + 0x5f4) = DAT_00328ae0;
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
    fVar7 = (float)FUN_003696ec(uVar8,uVar4);
    uVar1 = (undefined2)(int)(fVar7 * DAT_00328ae4);
    *(undefined2 *)(param_1 + 0xbe) = uVar1;
    *(undefined2 *)(param_1 + 0x36) = uVar1;
    break;
  case 4:
    FUN_003411f8(DAT_00328ae8,param_1,7,2,0);
    *(undefined4 *)(param_1 + 0x554) = 5;
    *(undefined4 *)(param_1 + 0x558) = 1;
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
    *(undefined4 *)(param_1 + 0x634) = DAT_00328ae0;
    break;
  case 5:
    FUN_003411f8(DAT_00328ae8,param_1,0xb,2,0);
    *(undefined4 *)(param_1 + 0x554) = 7;
    uVar4 = DAT_00328ae0;
    *(undefined4 *)(param_1 + 0x558) = 1;
    *(undefined4 *)(param_1 + 0x634) = uVar4;
    *(undefined2 *)(param_1 + 0x550) = 1;
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
    break;
  case 6:
    FUN_003411f8(DAT_00328ae8,param_1,1,2,0);
    *(undefined4 *)(param_1 + 0x554) = 9;
    *(undefined4 *)(param_1 + 0x558) = 1;
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
    break;
  case 7:
    if (*(int *)(param_1 + 0x5fc) == 0) {
      iVar2 = *(int *)(DAT_00328aec + param_2);
      z_actor_003738d0(*(undefined4 *)(iVar2 + 0x28),*(float *)(iVar2 + 0x2c) + DAT_00328af0,
                       *(undefined4 *)(iVar2 + 0x30),param_2 + 0x208c,param_2,0x8b,0,0,0,0x17,1);
      FUN_00376a78(param_2,0x12);
      *(undefined4 *)(param_1 + 0x5fc) = 1;
    }
    uVar4 = 0xb;
    goto LAB_00328960;
  case 8:
    FUN_003411f8(DAT_00328ae8,param_1,0x34,0);
    *(undefined4 *)(param_1 + 0x554) = 0xd;
    *(undefined4 *)(param_1 + 0x558) = 1;
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
    break;
  case 9:
    FUN_003411f8(DAT_00328ae8,param_1,0x2e,2,0);
    *(undefined4 *)(param_1 + 0x554) = 0xe;
    *(undefined4 *)(param_1 + 0x558) = 1;
    uVar4 = DAT_00328af8;
    iVar2 = DAT_00328af4 + 4;
    *(undefined2 *)(DAT_00328af4 + param_1) = 4;
    *(undefined2 *)(iVar2 + param_1) = 4;
    *(undefined2 *)(param_1 + 0x550) = 2;
    uVar8 = DAT_00328afc;
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
    FUN_0037547c(DAT_00328b00,param_1 + 0x28,4,uVar8,uVar8,uVar4);
    break;
  case 10:
    FUN_003411f8(DAT_00328ae8,param_1,5,2,0);
    *(undefined4 *)(param_1 + 0x554) = 0x10;
    *(undefined4 *)(param_1 + 0x558) = 1;
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
    if (*(int *)(param_1 + 0x600) == 0) {
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00328b04 + 0x145e),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x2c) + fVar7 + DAT_00328b08
                   ,*(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x5d,0,0x4000,0
                   ,3);
      *(undefined4 *)(param_1 + 0x600) = 1;
    }
    iVar2 = DAT_00328af4 + 4;
    *(undefined2 *)(DAT_00328af4 + param_1) = 3;
    *(undefined2 *)(iVar2 + param_1) = 3;
    break;
  case 0xb:
    FUN_003411f8(DAT_00328ae8,param_1,9,2,0);
    *(undefined4 *)(param_1 + 0x554) = 0x12;
    *(undefined4 *)(param_1 + 0x558) = 1;
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
    break;
  case 0xc:
    FUN_003411f8(DAT_00328ae8,param_1,3,2,0);
    *(undefined4 *)(param_1 + 0x554) = 0x14;
    *(undefined4 *)(param_1 + 0x558) = 1;
    iVar2 = DAT_00328af4 + 4;
    *(undefined2 *)(DAT_00328af4 + param_1) = 6;
    *(undefined2 *)(iVar2 + param_1) = 6;
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
    break;
  case 0xd:
    uVar4 = 0x16;
LAB_00328960:
    *(undefined4 *)(param_1 + 0x554) = uVar4;
    break;
  case 0xe:
    *(undefined4 *)(param_1 + 0x554) = 0x17;
    *(undefined4 *)(param_1 + 0x558) = 2;
    *(undefined4 *)(param_1 + 0x560) = 0xff;
    break;
  case 0xf:
    if (*(int *)(param_1 + 0x608) == 0) {
      z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x5d,0,0,0,4,1);
      *(undefined4 *)(param_1 + 0x608) = 1;
    }
    *(undefined4 *)(param_1 + 0x554) = 0xc;
  }
  *(uint *)(param_1 + 0x5f8) = uVar5;
  return;
}
