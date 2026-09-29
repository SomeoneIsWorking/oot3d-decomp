// OoT3D decomp @ 002abff0  name=z_bg_jya_bombchuiwa_002abff0  size=488

void z_bg_jya_bombchuiwa_002abff0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  FUN_003510b0(param_1,DAT_002ac1d8);
  uVar1 = FUN_00372f38(param_1,param_2,param_1 + 0x220,6,0);
  iVar2 = (**(code **)(*(int *)*DAT_002ac1e0 + 0xc))
                    ((int *)*DAT_002ac1e0,0x234,DAT_002ac1dc,DAT_002ac1e4);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00347258();
  }
  *(undefined4 *)(param_1 + 0x230) = uVar3;
  FUN_00340e14(param_1,param_2,uVar3,param_1 + 0x224,0x24,param_1 + 0x228,2,param_1 + 0x22c,1,0);
  uVar3 = FUN_00372f0c(uVar1,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x228) + 0xc),uVar3);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x228) + 0xc) + 0x10) = 1;
  uVar3 = FUN_00372f0c(uVar1,3);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x224) + 0xc),uVar3);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x224) + 0xc) + 0x10) = 1;
  FUN_00350eb8(param_2,param_1 + 0x1a8);
  FUN_00350d48(param_2,param_1 + 0x1a8,param_1,DAT_002ac1e8,param_1 + 0x1c8);
  iVar2 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_002ac1f0;
    *(byte *)(param_1 + 0x21e) = *(byte *)(param_1 + 0x21e) & 0xf8 | 3;
    *(undefined2 *)(param_1 + 0x21c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0x218) = DAT_002ac1ec;
    *(byte *)(param_1 + 0x21e) = *(byte *)(param_1 + 0x21e) & 0xf8 | 4;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                     *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0xb7,0,0,0,0,1);
  }
  FUN_0037322c(DAT_002ac1f4,param_1);
  return;
}
