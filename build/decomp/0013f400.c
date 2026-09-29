// OoT3D decomp @ 0013f400  name=FUN_0013f400  size=52

void FUN_0013f400(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;

  uVar5 = FUN_0035a3c4(param_2,1);
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  bVar4 = (int)uVar5 != 0;
  iVar1 = 0;
  iVar2 = 0;
  if (bVar4) {
    iVar2 = param_2 + 0x5300;
    iVar3 = (int)*(short *)(param_2 + 0x53f0);
    iVar1 = iVar3 + -0xff;
  }
  if (iVar1 < 0 != (bVar4 && SBORROW4(iVar3,0xff))) {
    *(short *)(iVar2 + 0xf0) = (short)iVar3 + 5;
  }
  return;
}
