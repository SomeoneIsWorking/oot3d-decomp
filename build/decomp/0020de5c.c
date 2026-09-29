// OoT3D decomp @ 0020de5c  name=FUN_0020de5c  size=216

void FUN_0020de5c(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;

  if (((int)*(short *)(param_1 + 0x36) - 1U < 0x40) &&
     (iVar2 = FUN_0036e864(param_2,*(short *)(param_1 + 0x36) + -1), iVar2 != 0)) {
    sVar1 = *(short *)(param_1 + 0x1c);
  }
  else {
    if ((*(short *)(param_1 + 0x36) != -1) ||
       (iVar2 = FUN_0036cf6c(param_2,(int)*(char *)(param_1 + 3)), iVar2 == 0)) {
      if (((~((int)*(short *)(param_1 + 0x1c) >> 8) & 0x3fU) == 0) ||
         (iVar2 = FUN_0036e864(param_2,(uint)((int)*(short *)(param_1 + 0x1c) << 0x12) >> 0x1a),
         iVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0020df30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x1a4))(param_1,param_2);
        return;
      }
      goto FUN_00374428;
    }
    sVar1 = *(short *)(param_1 + 0x1c);
  }
  if ((~((int)sVar1 >> 8) & 0x3fU) != 0) {
    FUN_00375c10(param_2,(uint)((int)sVar1 << 0x12) >> 0x1a);
  }
FUN_00374428:
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
