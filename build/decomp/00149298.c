// OoT3D decomp @ 00149298  name=FUN_00149298  size=168

undefined4 FUN_00149298(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  *param_2 = *param_3;
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 1);
  *(undefined1 *)((int)param_2 + 0x11) = *(undefined1 *)((int)param_3 + 5);
  *(undefined1 *)((int)param_2 + 0x12) = *(undefined1 *)((int)param_3 + 6);
  *(undefined1 *)((int)param_2 + 0x13) = 0x10;
  *(undefined1 *)((int)param_2 + 0x15) = *(undefined1 *)((int)param_3 + 7);
  *(undefined1 *)(param_2 + 0xb) = *(undefined1 *)(param_3 + 2);
  param_2[6] = param_3[3];
  *(undefined1 *)(param_2 + 7) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)((int)param_2 + 0x1d) = *(undefined1 *)((int)param_3 + 0x11);
  param_2[8] = param_3[5];
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_3 + 6);
  *(undefined1 *)((int)param_2 + 0x25) = *(undefined1 *)((int)param_3 + 0x19);
  *(undefined1 *)((int)param_2 + 0x2d) = *(undefined1 *)(param_3 + 7);
  *(undefined1 *)((int)param_2 + 0x2e) = *(undefined1 *)((int)param_3 + 0x1d);
  *(undefined1 *)((int)param_2 + 0x2f) = *(undefined1 *)((int)param_3 + 0x1e);
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_2[0x10] = param_3[8];
  param_2[0x11] = uVar1;
  param_2[0x12] = uVar2;
  param_2[0x13] = uVar3;
  uVar1 = param_3[0xd];
  param_2[0x14] = param_3[0xc];
  param_2[0x15] = uVar1;
  return 1;
}
