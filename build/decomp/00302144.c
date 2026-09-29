// OoT3D decomp @ 00302144  name=FUN_00302144  size=132

int FUN_00302144(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_28 [12];
  undefined4 local_1c;

  uVar1 = param_8;
  iVar2 = FUN_00302424(param_1,&local_1c,auStack_28,0,0,param_5);
  if (-1 < iVar2) {
    *param_3 = local_1c;
    iVar2 = FUN_00302314(param_3 + 1,&param_6,uVar1);
    if ((-1 < iVar2) && (iVar2 = FUN_00302288(param_1,param_2,param_4,param_3), -1 < iVar2)) {
      iVar2 = 0;
    }
  }
  return iVar2;
}
