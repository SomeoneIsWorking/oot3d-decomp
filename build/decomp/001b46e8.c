// OoT3D decomp @ 001b46e8  name=FUN_001b46e8  size=164

void FUN_001b46e8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = uRam001b478c;
  if ((*(uint *)(param_1 + 0xe54) & 0x2000) == 0) {
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x8000000;
    func_0x00341e68(param_1,param_2,param_1 + 0x1b4,uRam001b4790,uVar2,0);
    iVar1 = func_0x003478bc(*(undefined4 *)(param_1 + 0x1ec),9);
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    uVar3 = *(undefined4 *)(iVar1 + 0x2c);
    *(undefined4 *)(param_1 + 0x1088) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(param_1 + 0x108c) = uVar2;
    *(undefined4 *)(param_1 + 0x1090) = uVar3;
    if (*(code **)(param_1 + 0xea8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001b4780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0xea8))(param_1,param_2);
      return;
    }
  }
  return;
}

