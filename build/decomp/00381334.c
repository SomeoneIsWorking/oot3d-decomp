// OoT3D decomp @ 00381334  name=FUN_00381334  size=144

undefined4 FUN_00381334(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];

  local_20 = *param_2;
  local_1c = (float)param_2[1];
  local_18 = param_2[2];
  iVar1 = FUN_0033eeb8(local_20,local_18,param_1,param_1 + 0xa98,&local_1c,auStack_10);
  if (iVar1 == 1) {
    if (((float)param_2[1] < local_1c) &&
       (iVar1 = FUN_00358410(param_1 + 0xa98,auStack_14,auStack_24,&local_20), iVar1 != -0x39060000)
       ) {
      return 1;
    }
  }
  return 0;
}
