// OoT3D decomp @ 003fffb8  name=FUN_003fffb8  size=216

int FUN_003fffb8(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_20;
  undefined4 local_1c;

  iVar2 = DAT_00400090;
  if (*(uint *)(param_3 + 8) < 0x201) {
    local_1c = 0;
    local_20 = FUN_0030e680(param_1);
    iVar2 = FUN_004001f8(&local_20,&local_1c,0);
    if (-1 < iVar2) {
      puVar3 = (undefined4 *)FUN_0030e6a8(DAT_00400094);
      uVar1 = DAT_00400098;
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[1] = local_1c;
        *puVar3 = uVar1;
      }
      *param_2 = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        return 0;
      }
      software_interrupt(0x23);
      return DAT_0040009c;
    }
  }
  return iVar2;
}
