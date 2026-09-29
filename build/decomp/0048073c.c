// OoT3D decomp @ 0048073c  name=FUN_0048073c  size=172

void FUN_0048073c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_20 [12];

  if (param_4 < 0) {
    param_4 = 0;
  }
  iVar1 = (int)((ulonglong)((longlong)DAT_004807e8 * (longlong)param_4) >> 0x20);
  iVar2 = (int)((ulonglong)((longlong)DAT_004807e8 * (longlong)param_4) >> 0x20);
  uVar4 = (iVar2 >> 6) - (iVar2 >> 0x1f);
  iVar2 = (int)((longlong)(int)uVar4 * (longlong)DAT_004807ec + ((ulonglong)uVar4 << 0x20) >> 0x20);
  iVar3 = (int)((ulonglong)((longlong)DAT_004807f0 * (longlong)param_4) >> 0x20);
  FUN_003061a8(auStack_20,DAT_004807f4,1,1,0,(iVar3 >> 0xe) - (iVar3 >> 0x1f),
               uVar4 + ((iVar2 >> 5) - (iVar2 >> 0x1f)) * -0x3c,
               param_4 + ((iVar1 >> 6) - (iVar1 >> 0x1f)) * -1000);
  FUN_00487fb8(param_1,param_2,param_3,auStack_20);
  return;
}
