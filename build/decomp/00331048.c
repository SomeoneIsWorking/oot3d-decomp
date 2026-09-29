// OoT3D decomp @ 00331048  name=FUN_00331048  size=68

void FUN_00331048(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;

  uVar3 = FUN_00366684(0);
  iVar2 = (int)uVar3;
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  if (iVar2 == param_1) {
    iVar1 = DAT_0033108c;
  }
  if ((iVar2 != param_1 || iVar2 != iVar1) && (iVar2 != DAT_00331090)) {
    FUN_002d6c18(param_1,param_2);
    return;
  }
  return;
}
