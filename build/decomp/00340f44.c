// OoT3D decomp @ 00340f44  name=FUN_00340f44  size=348

void FUN_00340f44(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  uint in_fpscr;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;

  uStack_28 = *(undefined4 *)(iRam003410a0 + 0xc);
  bVar1 = 0;
  fStack_34 = (float)VectorUnsignedToFloat((uint)param_1[8],(byte)(in_fpscr >> 0x15) & 3);
  fStack_34 = fStack_34 * fRam003410a4;
  fStack_30 = (float)VectorUnsignedToFloat((uint)param_1[9],(byte)(in_fpscr >> 0x15) & 3);
  fStack_30 = fStack_30 * fRam003410a4;
  fStack_2c = (float)VectorUnsignedToFloat((uint)param_1[10],(byte)(in_fpscr >> 0x15) & 3);
  fStack_2c = fStack_2c * fRam003410a4;
  uStack_44 = *(undefined4 *)(iRam003410a0 + 0x10);
  uStack_40 = *(undefined4 *)(iRam003410a0 + 0x14);
  uStack_3c = *(undefined4 *)(iRam003410a0 + 0x18);
  uStack_38 = *(undefined4 *)(iRam003410a0 + 0x1c);
  uStack_54 = *(undefined4 *)(iRam003410a0 + 0x20);
  uStack_50 = *(undefined4 *)(iRam003410a0 + 0x24);
  uStack_4c = *(undefined4 *)(iRam003410a0 + 0x28);
  uStack_48 = *(undefined4 *)(iRam003410a0 + 0x2c);
  uStack_64 = *(undefined4 *)(iRam003410a0 + 0x30);
  uStack_60 = *(undefined4 *)(iRam003410a0 + 0x34);
  uStack_5c = *(undefined4 *)(iRam003410a0 + 0x38);
  uStack_58 = *(undefined4 *)(iRam003410a0 + 0x3c);
  uStack_74 = *(undefined4 *)(iRam003410a0 + 0x40);
  uStack_70 = *(undefined4 *)(iRam003410a0 + 0x44);
  uStack_6c = *(undefined4 *)(iRam003410a0 + 0x48);
  uStack_68 = *(undefined4 *)(iRam003410a0 + 0x4c);
  if (*param_1 == 0) goto LAB_0034107c;
  do {
    func_0x0033d174(param_2,bVar1,&uStack_44,&fStack_34,&uStack_54,&uStack_64);
    while( true ) {
      func_0x0033d200(param_2,bVar1);
      bVar1 = bVar1 + 1;
      if (*param_1 <= bVar1) {
        for (; bVar1 < 3; bVar1 = bVar1 + 1) {
LAB_0034107c:
          func_0x002c56a4(param_2,bVar1);
        }
        return;
      }
      if (2 < bVar1) {
        return;
      }
      if (bVar1 == 0) break;
      func_0x0033d174(param_2,bVar1,&uStack_44,&fStack_34,&uStack_74,&uStack_74);
    }
  } while( true );
}
