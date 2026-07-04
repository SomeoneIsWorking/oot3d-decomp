// OoT3D decomp @ 0041af08  name=FUN_0041af08  size=120

void FUN_0041af08(uint param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  software_interrupt(0x28);
  lVar1 = (ulonglong)param_1 * 3 +
          CONCAT44(((int)param_2 >> 0x1f) * UNK_0041af80 +
                   (int)((ulonglong)UNK_0041af80 * (ulonglong)param_2 >> 0x20),
                   (int)((ulonglong)UNK_0041af80 * (ulonglong)param_2)) +
          CONCAT44(param_2 * 3,(int)((ulonglong)UNK_0041af80 * (ulonglong)param_1 >> 0x20));
  uVar3 = FUN_00332754((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
  iVar2 = UNK_0041af84;
  *(undefined4 *)(UNK_0041af84 + 0xc) = uVar3;
  *(int *)(param_1 + 0x8c) = *(int *)(iVar2 + 8) + 2;
  return;
}

