// OoT3D decomp @ 00257054  name=FUN_00257054  size=80

void FUN_00257054(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_10 [4];
  undefined4 *local_c;

  FUN_0032db24(DAT_002570a4,0,param_1,0,&local_c,auStack_10,param_3,0,0x1c);
  if (local_c != (undefined4 *)0x0) {
    uVar1 = local_c[1];
    uVar2 = local_c[2];
    uVar3 = local_c[3];
    uVar4 = local_c[4];
    *param_2 = *local_c;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    param_2[4] = uVar4;
  }
  return;
}
