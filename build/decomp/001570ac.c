// OoT3D decomp @ 001570ac  name=FUN_001570ac  size=76

void FUN_001570ac(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  if (0x5a < *(short *)(param_1 + 0x8b2)) {
    FUN_00374428(param_1);
  }
  FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_001570fc;
  uVar1 = DAT_001570f8;
  *(short *)(param_1 + 0x8b2) = *(short *)(param_1 + 0x8b2) + 1;
  FUN_0036e168(DAT_00157104,DAT_00157100,uVar2,uVar1,param_1 + 0x6c);
  return;
}
