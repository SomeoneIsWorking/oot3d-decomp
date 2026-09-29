// OoT3D decomp @ 00178148  name=FUN_00178148  size=208

void FUN_00178148(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;

  FUN_003731e0(param_1 + 0x2fc);
  fVar4 = (float)FUN_003696ec(DAT_00178218 - *(float *)(param_1 + 0x28),-*(float *)(param_1 + 0x30))
  ;
  FUN_00375a18(param_1 + 0xbe,(int)(short)(int)(fVar4 * DAT_0017821c),0x32,DAT_00178220,0);
  uVar2 = DAT_00178228;
  uVar1 = DAT_00178224;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  iVar3 = FUN_003736fc(uVar2,uVar1,param_1 + 0x2fc);
  if ((iVar3 != 0) || (iVar3 = FUN_003736fc(DAT_0017822c,uVar1,param_1 + 0x2fc), iVar3 != 0)) {
    FUN_00375bcc(param_1,DAT_00178230);
  }
  uVar1 = DAT_00178238;
  if (*(uint *)(param_1 + 0x30) < DAT_00178234) {
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  }
  return;
}
