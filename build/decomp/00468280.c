// OoT3D decomp @ 00468280  name=FUN_00468280  size=140

void FUN_00468280(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;

  puVar2 = DAT_00468310;
  puVar1 = DAT_0046830c;
  DAT_0046830c[1] = 0;
  if (((*puVar2 & 1) == 0) &&
     (uVar5 = FUN_003679b4(DAT_00468310), param_2 = (undefined4)((ulonglong)uVar5 >> 0x20),
     (int)uVar5 != 0)) {
    FUN_0036788c(DAT_00468314);
    param_2 = DAT_0046831c;
  }
  uVar3 = *(undefined4 *)(DAT_00468320 + 0xf3c);
  puVar1[0x10] = uVar3;
  FUN_00480090(uVar3,param_2);
  iVar4 = FUN_00313ce0(0x38);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = FUN_002f2448(iVar4,0,1);
  }
  *puVar1 = uVar3;
  puVar1 = DAT_00468324;
  *DAT_00468324 = 0;
  puVar1[1] = 0;
  return;
}
