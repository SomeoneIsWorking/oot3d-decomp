// OoT3D decomp @ 0027112c  name=FUN_0027112c  size=80

void FUN_0027112c(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  iVar2 = *(int *)(DAT_0027117c + param_2);
  uVar3 = *(undefined4 *)(iVar2 + 0x2c);
  uVar4 = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  uVar1 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(DAT_00271180 + param_2) * 4 + 0xa54));
  *(undefined2 *)(param_1 + 0xbe) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00271178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x1b0))(param_1,param_2);
  return;
}
