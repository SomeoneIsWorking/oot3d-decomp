// OoT3D decomp @ 002023c0  name=FUN_002023c0  size=180

void FUN_002023c0(int param_1,int param_2)

{
  short sVar1;
  uint extraout_r1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_18;

  local_18 = DAT_00202474;
  FUN_0034dd3c(param_1,param_2,&local_18,10);
  uVar2 = extraout_r1;
  if (*(short *)(param_1 + 0x104) == 0x13) {
    uVar3 = FUN_0035b164();
    uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
    if (((int)uVar3 != 1) &&
       (uVar2 = *(uint *)(DAT_0020247c + 0x50), (*(uint *)(DAT_00202478 + 0xbc) & uVar2) == 0)) {
      if (*(short *)(param_2 + 0x2238) == 0) {
        uVar3 = FUN_003769d8(param_1 + 0x28a0);
        uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 == 0) {
          return;
        }
      }
      else {
        uVar3 = FUN_003769d8(param_1 + 0x28a0);
        uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 != 0) {
          return;
        }
      }
    }
  }
  sVar1 = *(short *)(param_2 + 0x2238) + 1;
  if (0x14 < sVar1) {
    uVar2 = DAT_00202480;
  }
  *(short *)(param_2 + 0x2238) = sVar1;
  if (0x14 < sVar1) {
    *(undefined1 *)(uVar2 + param_2) = 0xb;
  }
  return;
}
