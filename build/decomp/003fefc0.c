// OoT3D decomp @ 003fefc0  name=FUN_003fefc0  size=40

void FUN_003fefc0(void)

{
  undefined4 uVar1;

  uVar1 = FUN_003fefec();
                    /* WARNING: Could not recover jumptable at 0x003fefe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*puRam003fefe8 + 0x10))((int *)*puRam003fefe8,uVar1);
  return;
}
