// OoT3D decomp @ 00110d70  name=FUN_00110d70  size=188

void FUN_00110d70(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;

  FUN_00376864();
  FUN_00376340(DAT_00110e94,DAT_00110e90,DAT_00110e8c,param_2,param_1,0x85);
  if ((*(ushort *)(param_1 + 0x90) & 9) == 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0x1b8);
    bVar2 = (*(byte *)(param_1 + 0x1b8) & 2) == 0;
    if (!bVar2) {
      uVar1 = *(uint *)(param_1 + 0x1ac);
    }
    if ((bVar2 || uVar1 == 0) || (*(char *)(uVar1 + 2) != '\x02')) {
      if (*(short *)(param_1 + 0x218) < 0x5b) {
        FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
      }
      else {
        FUN_00374428(param_1);
      }
      *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x4b0;
      *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 4000;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
