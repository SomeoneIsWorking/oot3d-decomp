// OoT3D decomp @ 002ce374  name=FUN_002ce374  size=256

int FUN_002ce374(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5,
                undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;

  local_24 = 0;
  local_28 = 0;
  FUN_0030db4c();
  FUN_0030dab0();
  puVar3 = param_4;
  iVar1 = param_5;
  if (param_4 == (undefined4 *)0x0 || param_5 == 0) {
    puVar3 = &local_28;
    iVar1 = 1;
  }
  if (param_2 == (undefined4 *)0x0 || param_3 == 0) {
    param_3 = 1;
    param_2 = &local_24;
  }
  iVar1 = FUN_0048a380(param_1,param_2,param_3,puVar3,iVar1,&local_2c);
  if (iVar1 < 0) {
    FUN_0030e3ac(iVar1,&DAT_002ce474,0,&DAT_002ce474);
    FUN_002fb928(0);
  }
  if (param_4 == (undefined4 *)0x0 || param_5 == 0) {
    local_2c = 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_2c;
  }
  FUN_0030da40();
  software_interrupt(0x14);
  uVar2 = *DAT_002ce478 >> 0x1b;
  if ((*DAT_002ce478 & 0x80000000) != 0) {
    uVar2 = uVar2 - 0x20;
  }
  if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
    FUN_003351b4();
  }
  return iVar1;
}
