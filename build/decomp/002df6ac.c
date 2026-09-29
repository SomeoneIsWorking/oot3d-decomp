// OoT3D decomp @ 002df6ac  name=FUN_002df6ac  size=316

undefined4
FUN_002df6ac(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_4c;
  int local_48;

  if (((*DAT_002df7e8 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_002df7e8), iVar2 != 0)) {
    FUN_0036788c(DAT_002df7ec);
  }
  iVar2 = DAT_002df7f8;
  local_50 = 0;
  local_54 = DAT_002df7fc;
  if (param_4 != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xf0) + 0xf4) = 0;
    local_4f = 0;
    iVar4 = *(int *)(param_2 + 0xf0);
    local_4c = param_3;
    local_48 = param_4;
    if ((*(char *)(iVar2 + 0xf) == '\0') || (iVar2 = FUN_002e2424(), iVar2 != 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(iVar4 + 0x18) = uVar1;
    FUN_002dabe0(*(undefined4 *)(param_2 + 0xf0),&local_54);
    iVar2 = 1 - (uint)*(byte *)(param_2 + 0x1c0);
    if (1 < *(byte *)(param_2 + 0x1c0)) {
      iVar2 = 0;
    }
    iVar2 = FUN_002daaf0(param_1,*(undefined4 *)(param_2 + 0xf0),param_5,param_6,param_7,param_8,
                         iVar2);
    if (iVar2 != 0) {
      *(undefined1 *)(param_2 + 0x1c0) = 0;
      uVar3 = FUN_002da99c(*(undefined4 *)(param_2 + 0xf0),param_9);
      return uVar3;
    }
  }
  return 0;
}
