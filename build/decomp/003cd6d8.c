// OoT3D decomp @ 003cd6d8  name=FUN_003cd6d8  size=196

void FUN_003cd6d8(int param_1,undefined4 *param_2,short *param_3,undefined4 *param_4,
                 undefined2 param_5,undefined4 param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  iVar1 = z_actor_003738d0(*param_2,param_2[1],param_2[2],param_7 + 0x208c,param_7,7,(int)*param_3,
                           (int)param_3[1],(int)*(char *)(param_1 + 0x1e),param_8,1);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x128) = iVar1;
    *(int *)(iVar1 + 0x124) = param_1;
    if (-1 < *(char *)(iVar1 + 3)) {
      *(undefined1 *)(iVar1 + 3) = *(undefined1 *)(param_1 + 3);
    }
  }
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    uVar3 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined4 *)(iVar1 + 0x5c) = uVar3;
    *(undefined4 *)(iVar1 + 0x6c) = *param_4;
    *(undefined1 *)(iVar1 + 0x1d1) = 2;
    *(undefined2 *)(iVar1 + 0x1d2) = param_5;
    *(undefined4 *)(iVar1 + 0x1d4) = param_4[1];
    *(undefined4 *)(iVar1 + 0x1d8) = param_4[2];
  }
  return;
}
