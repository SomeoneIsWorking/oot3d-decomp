// OoT3D decomp @ 0016d77c  name=FUN_0016d77c  size=168

undefined4 FUN_0016d77c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  uVar1 = DAT_0016d828;
  if (param_2 == 9) {
    local_20 = DAT_0016d824;
    local_1c = DAT_0016d828;
    local_18 = DAT_0016d828;
    FUN_00372070(param_3,param_3,&local_20);
    FUN_0034e01c(param_3,param_4 + 0x90c);
    local_20 = DAT_0016d82c;
    local_1c = uVar1;
    local_18 = uVar1;
    FUN_00372070(param_3,param_3,&local_20);
  }
  else if (param_2 == 1) {
    FUN_0034df48(param_3,param_4 + 0x912);
  }
  return 0;
}
