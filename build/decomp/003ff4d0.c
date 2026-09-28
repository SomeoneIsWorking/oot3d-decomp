// OoT3D decomp @ 003ff4d0  name=FUN_003ff4d0  size=108

void FUN_003ff4d0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x10) + param_2 * 0x30);
    uVar1 = puVar3[1];
    uVar2 = puVar3[2];
    uVar4 = puVar3[3];
    uVar5 = puVar3[4];
    *param_3 = *puVar3;
    param_3[1] = uVar1;
    param_3[2] = uVar2;
    param_3[3] = uVar4;
    param_3[4] = uVar5;
    uVar1 = puVar3[6];
    uVar2 = puVar3[7];
    uVar4 = puVar3[8];
    uVar5 = puVar3[9];
    param_3[5] = puVar3[5];
    param_3[6] = uVar1;
    param_3[7] = uVar2;
    param_3[8] = uVar4;
    param_3[9] = uVar5;
    uVar1 = puVar3[0xb];
    param_3[10] = puVar3[10];
    param_3[0xb] = uVar1;
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003ff530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x10))
                (*(undefined4 *)(param_1 + 8),param_2,param_3,*(undefined4 *)(param_1 + 4));
      return;
    }
  }
  return;
}
